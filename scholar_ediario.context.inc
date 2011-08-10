<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function scholar_ediario_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'openscholar-feature-ediario';
  $context->description = 'ediarios';
  $context->tag = 'Feature';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'ediario' => 'ediario',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'ediario' => 'ediario',
        'ediario/*' => 'ediario/*',
      ),
      'options' => array(),
    ),
    'views' => array(
      'values' => array(
        'scholar_ediario:page_1' => 'scholar_ediario:page_1',
      ),
      'options' => array(),
    ),
  );
  $context->reactions = array(
    'menu' => 'ediario',
    'block' => array(
      'blocks' => array(
        'vsite_taxonomy-0' => array(
          'module' => 'vsite_taxonomy',
          'delta' => '0',
          'weight' => 37,
          'region' => 'right',
          'status' => '0',
          'label' => 'Categories - Filter categorized content',
          'type' => 'context_ui',
        ),
        'vsite_widgets-4' => array(
          'module' => 'vsite_widgets',
          'delta' => '2',
          'weight' => 38,
          'region' => 'right',
          'status' => '0',
          'label' => 'AddThis Button - Share posts using popular services',
          'type' => 'context_ui',
        ),
        'views-scholar_ediario-block_1' => array(
          'module' => 'views',
          'delta' => 'scholar_ediario-block_1',
          'weight' => 39,
          'region' => 'right',
          'status' => '0',
          'label' => 'scholar_ediario: Block',
          'type' => 'context_ui',
        ),
        'views-scholar_ediario_comments-block_1' => array(
          'module' => 'views',
          'delta' => 'scholar_ediario_comments-block_1',
          'weight' => 40,
          'region' => 'right',
          'status' => '0',
          'label' => 'scholar_ediario_comments: Recent comments',
          'type' => 'context_ui',
        ),
        'scholar_ediario-rss' => array(
          'module' => 'scholar_ediario',
          'delta' => 'rss',
          'weight' => 20,
          'region' => 'footer',
          'status' => '0',
          'label' => 'RSS Feed - Link to subscribe to your newest ediario entries',
          'type' => 'context_ui',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Feature');
  t('ediarios');

  $export['openscholar-feature-ediario'] = $context;
  return $export;
}
