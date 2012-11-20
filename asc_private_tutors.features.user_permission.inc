<?php
/**
 * @file
 * asc_private_tutors.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function asc_private_tutors_user_default_permissions() {
  $permissions = array();

  // Exported permission: create asc_private_tutor content.
  $permissions['create asc_private_tutor content'] = array(
    'name' => 'create asc_private_tutor content',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any asc_private_tutor content.
  $permissions['delete any asc_private_tutor content'] = array(
    'name' => 'delete any asc_private_tutor content',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own asc_private_tutor content.
  $permissions['delete own asc_private_tutor content'] = array(
    'name' => 'delete own asc_private_tutor content',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 7.
  $permissions['delete terms in 7'] = array(
    'name' => 'delete terms in 7',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Site Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any asc_private_tutor content.
  $permissions['edit any asc_private_tutor content'] = array(
    'name' => 'edit any asc_private_tutor content',
    'roles' => array(
      0 => 'Content Editor',
      1 => 'Content Manager',
      2 => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own asc_private_tutor content.
  $permissions['edit own asc_private_tutor content'] = array(
    'name' => 'edit own asc_private_tutor content',
    'roles' => array(
      0 => 'Content Editor',
      1 => 'Content Manager',
      2 => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit terms in 7.
  $permissions['edit terms in 7'] = array(
    'name' => 'edit terms in 7',
    'roles' => array(
      0 => 'Content Editor',
      1 => 'Content Manager',
      2 => 'Site Administrator',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
