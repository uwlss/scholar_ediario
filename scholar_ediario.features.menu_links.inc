<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function scholar_ediario_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:ediario
  $menu_links['features:ediario'] = array(
    'menu_name' => 'features',
    'link_path' => 'ediario',
    'router_path' => 'ediario',
    'link_title' => 'ediario',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('ediario');


  return $menu_links;
}
