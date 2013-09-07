<?php
/**
 * @file
 * seedlibrary_general.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function seedlibrary_general_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '4',
  );

  // Exported role: staff.
  $roles['staff'] = array(
    'name' => 'staff',
    'weight' => '3',
  );

  return $roles;
}
