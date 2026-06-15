# Code Security Review Guidelines

## Input Validation & Sanitization
- Validate all user-supplied input before use
- Check data types, lengths, and formats against expected patterns
- Use allowlists rather than blocklists for validation
- Never trust data from external sources or user input
- Sanitize paths to prevent directory traversal attacks

## Authentication & Authorization
- Use established authentication mechanisms; never implement custom crypto
- Enforce least privilege: scripts run with minimal required permissions
- Verify user identity before granting access to sensitive operations
- Document all security-critical decision points

## Secrets Management
- Never hardcode credentials, API keys, or tokens
- Use environment variables or secure vaults for sensitive data
- Rotate secrets regularly and audit access
- Never log or echo sensitive values
- Exclude secret files from version control (.env, credentials)

## Injection Prevention
- Avoid `eval()`, `exec()`, and similar dynamic execution functions
- Use parameterized queries for database operations
- Escape special characters in command arguments
- Quote variables in shell commands: `"$var"`
- Use arrays for command arguments instead of string concatenation

## API & Network Security
- Use HTTPS for all network communication
- Implement timeouts on network requests
- Validate SSL/TLS certificates
- Sanitize URLs and prevent open redirect vulnerabilities
- Limit external API calls and implement rate limiting

## Logging & Monitoring
- Log all security-relevant events with timestamps
- Never log sensitive data (passwords, tokens, PII)
- Implement monitoring for suspicious activity
- Retain logs for audit purposes
- Ensure logs are protected with appropriate access controls

## Dependency Management
- Pin dependency versions; avoid open ranges
- Regularly audit dependencies for known vulnerabilities
- Use only well-maintained, trusted packages
- Review dependency source code before including in critical systems
- Document all external dependencies explicitly

## File & Resource Security
- Use atomic operations for critical file writes
- Set appropriate file permissions (avoid world-readable for sensitive data)
- Clean up temporary files and resources
- Prevent race conditions in file operations
- Validate file paths to prevent symlink attacks

## Error Handling
- Do not expose internal paths or stack traces in error messages
- Provide user-friendly error messages without revealing sensitive details
- Log detailed errors for debugging (securely, not to users)
- Handle exceptions gracefully without crashing
- Fail securely: default to denying access on errors
