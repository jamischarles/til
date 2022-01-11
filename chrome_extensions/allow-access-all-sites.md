# How to give your extension access to all sites

`activeTab` permission lets you get access to current site ONLY after the
extension button has been clicked. This can cause problems with activation when certain
extension code should be running but doesn't.

Increase permissions to all sites by adding this wildcard to your manifest:
`"host_permissions": ["*://*/*"],`

You may need to also add `tabs` permissions.
