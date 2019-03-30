<?php
/**
 * @file
 * commerce_start.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function commerce_start_commerce_product_default_types() {
  $items = array(
    'product' => array(
      'type' => 'product',
      'name' => 'Product',
      'description' => 'A basic product type.',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_commerce_tax_default_rates().
 */
function commerce_start_commerce_tax_default_rates() {
  $items = array(
    'vat' => array(
      'name' => 'vat',
      'display_title' => 'VAT',
      'description' => 'VAT at the rate of 23% | Podatek VAT w stawce 23%',
      'rate' => 0.23,
      'type' => 'vat',
      'rules_component' => 'commerce_tax_rate_vat',
      'default_rules_component' => 1,
      'price_component' => 'tax|vat',
      'calculation_callback' => 'commerce_tax_rate_calculate',
      'module' => 'commerce_tax_ui',
      'title' => 'VAT',
      'admin_list' => TRUE,
    ),
  );
  return $items;
}

/**
 * Implements hook_commerce_tax_default_types().
 */
function commerce_start_commerce_tax_default_types() {
  $items = array(
    'sales_tax' => array(
      'name' => 'sales_tax',
      'display_title' => 'Sales tax',
      'description' => 'A basic type for taxes that do not display inclusive with product prices.',
      'display_inclusive' => 0,
      'round_mode' => 0,
      'rule' => 'commerce_tax_type_sales_tax',
      'module' => 'commerce_tax_ui',
      'title' => 'Sales tax',
      'admin_list' => TRUE,
    ),
    'vat' => array(
      'name' => 'vat',
      'display_title' => 'VAT',
      'description' => 'A basic type for taxes that display inclusive with product prices.',
      'display_inclusive' => 1,
      'round_mode' => 1,
      'rule' => 'commerce_tax_type_vat',
      'module' => 'commerce_tax_ui',
      'title' => 'VAT',
      'admin_list' => TRUE,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function commerce_start_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function commerce_start_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function commerce_start_image_default_styles() {
  $styles = array();

  // Exported image style: product_big_-_480x400.
  $styles['product_big_-_480x400'] = array(
    'name' => 'product_big_-_480x400',
    'label' => 'Product big - 600x480',
    'effects' => array(
      2 => array(
        'label' => 'Skalowanie i przycinanie',
        'help' => 'Efekt skalowanie i przycinanie zachowa proporcje oryginalnego obrazu podczas skalowania a następnie przytnie obrazek na dłuższym brzegu. Efekt jest przydatny do tworzenia kwadratowych miniatur bez rozciągania obrazu.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 600,
          'height' => 480,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: product_icon_-_150x120.
  $styles['product_icon_-_150x120'] = array(
    'name' => 'product_icon_-_150x120',
    'label' => 'Product icon - 150x120',
    'effects' => array(
      3 => array(
        'label' => 'Skalowanie i przycinanie',
        'help' => 'Efekt skalowanie i przycinanie zachowa proporcje oryginalnego obrazu podczas skalowania a następnie przytnie obrazek na dłuższym brzegu. Efekt jest przydatny do tworzenia kwadratowych miniatur bez rozciągania obrazu.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 120,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: product_small.
  $styles['product_small'] = array(
    'name' => 'product_small',
    'label' => 'Product small - 200x180',
    'effects' => array(
      1 => array(
        'label' => 'Skalowanie i przycinanie',
        'help' => 'Efekt skalowanie i przycinanie zachowa proporcje oryginalnego obrazu podczas skalowania a następnie przytnie obrazek na dłuższym brzegu. Efekt jest przydatny do tworzenia kwadratowych miniatur bez rozciągania obrazu.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 180,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function commerce_start_node_info() {
  $items = array(
    'produkty' => array(
      'name' => t('Produkty'),
      'base' => 'node_content',
      'description' => t('Produkty w sklepie'),
      'has_title' => '1',
      'title_label' => t('Tytuł'),
      'help' => '',
    ),
  );
  return $items;
}
