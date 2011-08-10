<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function scholar_ediario_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_mediagroup
  $groups['ediario-group_mediagroup'] = array(
    'group_type' => 'standard',
    'type_name' => 'ediario',
    'group_name' => 'group_mediagroup',
    'label' => 'Media',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'teaser' => array(
          'format' => 'no_style',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'no_style',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'hidden',
      ),
    ),
    'weight' => '-3',
    'fields' => array(
      '0' => 'field_gallery_image',
      '1' => 'field_videoembed',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Media');

  return $groups;
}
