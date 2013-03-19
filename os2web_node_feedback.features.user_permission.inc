<?php
/**
 * @file
 * os2web_node_feedback.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function os2web_node_feedback_user_default_permissions() {
  $permissions = array();

  // Exported permission: access feedback form.
  $permissions['access feedback form'] = array(
    'name' => 'access feedback form',
    'roles' => array(
      0 => 'os2web_base_role_administrator',
      1 => 'os2web_base_role_editor',
      2 => 'os2web_base_role_webmaster',
      3 => 'anonymous user',
      4 => 'authenticated user',
    ),
    'module' => 'feedback',
  );

  // Exported permission: administer feedback.
  $permissions['administer feedback'] = array(
    'name' => 'administer feedback',
    'roles' => array(
      0 => 'os2web_base_role_administrator',
      1 => 'os2web_base_role_editor',
      2 => 'os2web_base_role_webmaster',
    ),
    'module' => 'feedback',
  );

  // Exported permission: view feedback messages.
  $permissions['view feedback messages'] = array(
    'name' => 'view feedback messages',
    'roles' => array(
      0 => 'os2web_base_role_administrator',
      1 => 'os2web_base_role_editor',
      2 => 'os2web_base_role_webmaster',
    ),
    'module' => 'feedback',
  );

  return $permissions;
}
