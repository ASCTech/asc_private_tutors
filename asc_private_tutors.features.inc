<?php
/**
 * @file
 * asc_private_tutors.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function asc_private_tutors_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_custom_breadcrumbs_views_config_features_default_settings().
 */
function asc_private_tutors_custom_breadcrumbs_views_config_features_default_settings() {
  $custom_breadcrumbs_views_configs = array();

  $custom_breadcrumbs_views_configs[] = array(
    -749372189 => array(),
  );
  return $custom_breadcrumbs_views_configs;
}

/**
 * Implements hook_node_info().
 */
function asc_private_tutors_node_info() {
  $items = array(
    'asc_private_tutor' => array(
      'name' => t('Private Tutor'),
      'base' => 'node_content',
      'description' => t('Tutors for the private tutor list.'),
      'has_title' => '1',
      'title_label' => t('Last Name'),
      'help' => '',
    ),
  );
  return $items;
}
