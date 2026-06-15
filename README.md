# kiro-dev-refactor-agent

A Kiro agent for refactoring bash scripts with best practices, security guidelines, and code quality improvements.

## Features

- **Code Quality Analysis**: Reviews bash scripts for readability and maintainability
- **Security Audit**: Validates against comprehensive security guidelines
- **Best Practices**: Enforces consistent patterns and conventions
- **Error Handling**: Checks exit codes, signal handling, and graceful failures
- **Input Validation**: Ensures proper argument validation and sanitization

## Contents

- `test.sh` — Example bash script demonstrating best practices
- `guidelines/security.md` — Code security review guidelines
- `commands.md` — Kiro CLI commands and setup instructions
- `.kiro/hooks/log-write.sh` — Hook for logging file operations

## Quick Start

### Review a Script

```bash
kiro-cli chat --agent dev-refactor
```

Then prompt:
```
Please review @test.sh following our bash development best practices and code security guidelines.
```

### Setup

1. Initialize the agent:
```bash
kiro-cli --agent dev-refactor
```

2. Verify configuration:
```bash
/context show
```

## Guidelines

This agent enforces:

- **Bash Best Practices**: Function organization, consistent naming, error handling
- **Security Standards**: Input validation, secrets management, injection prevention
- **Code Style**: Consistent indentation, meaningful names, comprehensive documentation

## Requirements

- Kiro CLI
- Bash 4.0+
- jq (for logging hooks)

## License

Internal use only
