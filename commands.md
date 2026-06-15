# Kiro CLI Commands Reference

## 1. Installation & Setup

### Verify Installation

```bash
kiro-cli --version
kiro-cli --help
```

### Initialize Workspace

```bash
mkdir -p guidelines
git init
git config user.name "Vamshi"
git config user.email "vamshi.krishna@ericsson.com"
```

## 2. Steering Files

Steering files provide development guidelines and best practices that are automatically loaded as resources.

### Create Development Refactor Guidelines

```bash
# Location: ~/.kiro/steering/dev-refactor.md
nano ~/.kiro/steering/dev-refactor.md
```

### Create Security Guidelines

```bash
# Location: guidelines/security.md
nano guidelines/security.md
```

## 3. Agent Configuration

### Create Agent Directory and Config

```bash
mkdir -p .kiro/agents
nano .kiro/agents/dev-refactor.json
```

### Verify Agent Configuration

```bash
kiro-cli --agent dev-refactor
/context show
```

## 4. Hooks Setup

Hooks allow automatic actions on tool usage (e.g., logging file writes).

### Create Hook Directory

```bash
mkdir -p .kiro/hooks
mv log-write.sh .kiro/hooks/
chmod +x .kiro/hooks/log-write.sh
```

### Add Hook to Agent Configuration

```json
"hooks": {
  "postToolUse": [
    {
      "matcher": "fs_write",
      "command": "bash .kiro/hooks/log-write.sh",
      "description": "Log file writes to write-log.json"
    }
  ]
}
```

### Test Hook

```bash
kiro-cli chat --agent dev-refactor
```

Then run:
```text
create a file called hello.txt with the text "Hello, world!"
```

Verify the log:
```bash
cat write-log.json
```

## 5. Example Prompts

### Review Script Against Guidelines

```text
Please review @test.sh following our bash development best practices and project's code security guidelines. Provide specific recommendations for improvement. Indicate source of guidelines/best practices followed.
```

### Create Full Project Structure

```text
create new folder name "vamshi"
create steering file in "vamshi/dev-refactor.md" with content where file should have steering content to refactor bash program with best practices rules.
create security rules file in "vamshi/guidelines/security.md". This file should have code security review guidelines.
create agent "~/.kiro/agents/dev-refactor.json" where it has name, description, tools, allowedTools, resources of steering file.
```

### Create Bash Script with Specifications

```text
Create bash script with the following specifications:
- Requires 2 or 3 arguments (error handling if missing)
- Calculate script start timestamp
- Integer argument handling: prime check, positive/negative/whole classification
- String argument handling: vowel detection and counting
- Summary output to terminal
```