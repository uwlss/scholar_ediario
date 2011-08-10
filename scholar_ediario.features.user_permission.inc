<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function scholar_ediario_user_default_permissions() {
  $permissions = array();

  // Exported permission: create ediario content
  $permissions['create ediario content'] = array(
    'name' => 'create ediario content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
      '2' => 'scholar admin',
      '3' => 'scholar user',
    ),
  );

  // Exported permission: delete own ediario content
  $permissions['delete own ediario content'] = array(
    'name' => 'delete own ediario content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
      '2' => 'scholar admin',
      '3' => 'scholar user',
    ),
  );

  // Exported permission: override ediario promote to front page option
  $permissions['override ediario promote to front page option'] = array(
    'name' => 'override ediario promote to front page option',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
      '2' => 'scholar admin',
      '3' => 'scholar user',
    ),
  );

  // Exported permission: override ediario published option
  $permissions['override ediario published option'] = array(
    'name' => 'override ediario published option',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
      '2' => 'scholar admin',
      '3' => 'scholar user',
    ),
  );

  // Exported permission: override ediario revision option
  $permissions['override ediario revision option'] = array(
    'name' => 'override ediario revision option',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
      '2' => 'scholar admin',
      '3' => 'scholar user',
    ),
  );

  // Exported permission: override ediario sticky option
  $permissions['override ediario sticky option'] = array(
    'name' => 'override ediario sticky option',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
      '2' => 'scholar admin',
      '3' => 'scholar user',
    ),
  );

  return $permissions;
}
