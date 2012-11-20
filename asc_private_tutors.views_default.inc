<?php
/**
 * @file
 * asc_private_tutors.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function asc_private_tutors_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'asc_private_tutors';
  $view->description = 'List of private tutors, designed for MSLC.';
  $view->tag = 'ASC';
  $view->base_table = 'node';
  $view->human_name = 'Private Tutors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Private Tutors';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_first_name' => 'title',
    'title' => 'title',
    'term_node_tid' => 'term_node_tid',
    'field_e_mail' => 'field_e_mail',
    'field_phone' => 'field_e_mail',
    'field_starting_price' => 'field_starting_price',
    'field_highest_price' => 'field_starting_price',
    'field_negotiable' => 'field_starting_price',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'term_node_tid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_e_mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br />',
      'empty_column' => 0,
    ),
    'field_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_starting_price' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' - ',
      'empty_column' => 0,
    ),
    'field_highest_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_negotiable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = 'Courses';
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'workshop_courses' => 'workshop_courses',
    'image_terms_1' => 0,
    'image_terms_2' => 0,
    'image_terms_3' => 0,
    'people_terms_1' => 0,
    'people_terms_3' => 0,
    'people_terms_2' => 0,
  );
  /* Field: Content: E-Mail */
  $handler->display->display_options['fields']['field_e_mail']['id'] = 'field_e_mail';
  $handler->display->display_options['fields']['field_e_mail']['table'] = 'field_data_field_e_mail';
  $handler->display->display_options['fields']['field_e_mail']['field'] = 'field_e_mail';
  $handler->display->display_options['fields']['field_e_mail']['label'] = 'Contact Info';
  $handler->display->display_options['fields']['field_e_mail']['element_label_colon'] = FALSE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  /* Field: Content: Starting Price */
  $handler->display->display_options['fields']['field_starting_price']['id'] = 'field_starting_price';
  $handler->display->display_options['fields']['field_starting_price']['table'] = 'field_data_field_starting_price';
  $handler->display->display_options['fields']['field_starting_price']['field'] = 'field_starting_price';
  $handler->display->display_options['fields']['field_starting_price']['label'] = 'Price';
  $handler->display->display_options['fields']['field_starting_price']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Highest Price */
  $handler->display->display_options['fields']['field_highest_price']['id'] = 'field_highest_price';
  $handler->display->display_options['fields']['field_highest_price']['table'] = 'field_data_field_highest_price';
  $handler->display->display_options['fields']['field_highest_price']['field'] = 'field_highest_price';
  $handler->display->display_options['fields']['field_highest_price']['empty'] = 'Negotiable';
  $handler->display->display_options['fields']['field_highest_price']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'asc_private_tutor' => 'asc_private_tutor',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Course';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'workshop_courses';
  /* Filter criterion: Content: Highest Price (field_highest_price) */
  $handler->display->display_options['filters']['field_highest_price_value']['id'] = 'field_highest_price_value';
  $handler->display->display_options['filters']['field_highest_price_value']['table'] = 'field_data_field_highest_price';
  $handler->display->display_options['filters']['field_highest_price_value']['field'] = 'field_highest_price_value';
  $handler->display->display_options['filters']['field_highest_price_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_highest_price_value']['expose']['operator_id'] = 'field_highest_price_value_op';
  $handler->display->display_options['filters']['field_highest_price_value']['expose']['label'] = 'Highest Price (field_highest_price)';
  $handler->display->display_options['filters']['field_highest_price_value']['expose']['operator'] = 'field_highest_price_value_op';
  $handler->display->display_options['filters']['field_highest_price_value']['expose']['identifier'] = 'field_highest_price_value';
  $handler->display->display_options['filters']['field_highest_price_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_highest_price_value']['group_info']['label'] = 'Highest Price';
  $handler->display->display_options['filters']['field_highest_price_value']['group_info']['identifier'] = 'field_highest_price_value';
  $handler->display->display_options['filters']['field_highest_price_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Negotioable',
      'operator' => '=',
      'value' => array(
        'value' => '0',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => '$20',
      'operator' => '<=',
      'value' => array(
        'value' => '20',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => '$30',
      'operator' => '<=',
      'value' => array(
        'value' => '30',
        'min' => '',
        'max' => '',
      ),
    ),
    4 => array(
      'title' => '$40',
      'operator' => '<=',
      'value' => array(
        'value' => '40',
        'min' => '',
        'max' => '',
      ),
    ),
    5 => array(
      'title' => '$50',
      'operator' => '<=',
      'value' => array(
        'value' => '50',
        'min' => '',
        'max' => '',
      ),
    ),
    6 => array(
      'title' => '$75',
      'operator' => '<=',
      'value' => array(
        'value' => '75',
        'min' => '',
        'max' => '',
      ),
    ),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'resources/tutors';
  $export['asc_private_tutors'] = $view;

  return $export;
}
