<?php
/**
 * @file
 * commerce_start.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function commerce_start_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info_product|node|produkty|form';
  $field_group->group_name = 'group_info_product';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'produkty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_product_info';
  $field_group->data = array(
    'label' => 'Informacje',
    'weight' => '7',
    'children' => array(
      0 => 'body',
      1 => 'field_dodaj_produkt',
      2 => 'field_product_category',
      3 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-info-product field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_info_product|node|produkty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_gallery|node|produkty|form';
  $field_group->group_name = 'group_product_gallery';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'produkty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_product_info';
  $field_group->data = array(
    'label' => 'Galeria',
    'weight' => '8',
    'children' => array(
      0 => 'field_product_image',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-product-gallery field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_product_gallery|node|produkty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_info|node|produkty|form';
  $field_group->group_name = 'group_product_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'produkty';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Informacje podstawowe',
    'weight' => '0',
    'children' => array(
      0 => 'group_info_product',
      1 => 'group_product_gallery',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-product-info field-group-htabs',
      ),
    ),
  );
  $export['group_product_info|node|produkty|form'] = $field_group;

  return $export;
}
