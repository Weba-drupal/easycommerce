<?php
/**
 * @file
 * commerce_start.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function commerce_start_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'product_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Product Gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'więcej';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Zastosuj';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Przywróć';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortuj po';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Rosnąco';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Opis';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementów na stronę';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Wszystko -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Przesunięcie';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« pierwsza';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ poprzednia';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'następna ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'ostatnia »';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_product_image']['id'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['table'] = 'field_data_field_product_image';
  $handler->display->display_options['fields']['field_product_image']['field'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['label'] = '';
  $handler->display->display_options['fields']['field_product_image']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Wszystko';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Big image product */
  $handler = $view->new_display('entity_view', 'Big image product', 'entity_view_1');

  /* Display: Small image product */
  $handler = $view->new_display('entity_view', 'Small image product', 'entity_view_2');
  $translatables['product_gallery'] = array(
    t('Master'),
    t('więcej'),
    t('Zastosuj'),
    t('Przywróć'),
    t('Sortuj po'),
    t('Rosnąco'),
    t('Opis'),
    t('Elementów na stronę'),
    t('- Wszystko -'),
    t('Przesunięcie'),
    t('« pierwsza'),
    t('‹ poprzednia'),
    t('następna ›'),
    t('ostatnia »'),
    t('Wszystko'),
    t('Big image product'),
    t('Small image product'),
  );
  $export['product_gallery'] = $view;

  $view = new view();
  $view->name = 'product_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Product page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Produkty';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'więcej';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Zastosuj';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Przywróć';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortuj po';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Rosnąco';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Opis';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementów na stronę';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Wszystko -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Przesunięcie';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« pierwsza';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ poprzednia';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'następna ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'ostatnia »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Brak produktów przejdź na stronę <a href="node/add/produkty">produktu</a> i dodaj pierwszy produkt.

Chcesz dodać język polski w sklepie, zaimportuj plik po z paczki modułu, <a href="admin/config/regional/translate/import">import pliku spolszczenia</a>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Content: Referenced products */
  $handler->display->display_options['relationships']['field_dodaj_produkt_product_id']['id'] = 'field_dodaj_produkt_product_id';
  $handler->display->display_options['relationships']['field_dodaj_produkt_product_id']['table'] = 'field_data_field_dodaj_produkt';
  $handler->display->display_options['relationships']['field_dodaj_produkt_product_id']['field'] = 'field_dodaj_produkt_product_id';
  /* Field: Content: Tytuł */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Commerce Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['relationship'] = 'field_dodaj_produkt_product_id';
  $handler->display->display_options['fields']['commerce_price']['label'] = '';
  $handler->display->display_options['fields']['commerce_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => 'calculated_sell_price',
  );
  /* Field: Content: Odnośnik */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Więcej';
  /* Field: Commerce Product: Formularz dodawania do koszyka */
  $handler->display->display_options['fields']['add_to_cart_form']['id'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['table'] = 'views_entity_commerce_product';
  $handler->display->display_options['fields']['add_to_cart_form']['field'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['relationship'] = 'field_dodaj_produkt_product_id';
  $handler->display->display_options['fields']['add_to_cart_form']['label'] = '';
  $handler->display->display_options['fields']['add_to_cart_form']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['add_to_cart_form']['show_quantity'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['default_quantity'] = '1';
  $handler->display->display_options['fields']['add_to_cart_form']['combine'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['display_path'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['line_item_type'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'produkty' => 'produkty',
  );
  /* Filter criterion: Commerce Product: Price (commerce_price:amount) */
  $handler->display->display_options['filters']['commerce_price_amount']['id'] = 'commerce_price_amount';
  $handler->display->display_options['filters']['commerce_price_amount']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['filters']['commerce_price_amount']['field'] = 'commerce_price_amount';
  $handler->display->display_options['filters']['commerce_price_amount']['relationship'] = 'field_dodaj_produkt_product_id';
  $handler->display->display_options['filters']['commerce_price_amount']['operator'] = 'between';
  $handler->display->display_options['filters']['commerce_price_amount']['exposed'] = TRUE;
  $handler->display->display_options['filters']['commerce_price_amount']['expose']['operator_id'] = 'commerce_price_amount_op';
  $handler->display->display_options['filters']['commerce_price_amount']['expose']['label'] = 'Cena';
  $handler->display->display_options['filters']['commerce_price_amount']['expose']['operator'] = 'commerce_price_amount_op';
  $handler->display->display_options['filters']['commerce_price_amount']['expose']['identifier'] = 'commerce_price_amount';
  $handler->display->display_options['filters']['commerce_price_amount']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page product */
  $handler = $view->new_display('page', 'Page product', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Brak produktów przejdź na stronę <a href="node/add/produkty">produktu</a> i dodaj pierwszy produkt.

Chcesz dodać język polski w sklepie, zaimportuj plik po z paczki modułu, <a href="admin/config/regional/translate/import">import pliku spolszczenia</a>

Ustaw opcje konta bankowego w płatności, opcja dostępna pod adresem <a href="admin/commerce/config/payment-methods/manage/commerce_payment_bank_transfer/edit/3">ustawienia opcji numeru konta bankowego</a>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'produkty' => 'produkty',
  );
  /* Filter criterion: Commerce Product: Price (commerce_price:amount) */
  $handler->display->display_options['filters']['commerce_price_amount']['id'] = 'commerce_price_amount';
  $handler->display->display_options['filters']['commerce_price_amount']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['filters']['commerce_price_amount']['field'] = 'commerce_price_amount';
  $handler->display->display_options['filters']['commerce_price_amount']['relationship'] = 'field_dodaj_produkt_product_id';
  $handler->display->display_options['filters']['commerce_price_amount']['operator'] = 'between';
  $handler->display->display_options['filters']['commerce_price_amount']['exposed'] = TRUE;
  $handler->display->display_options['filters']['commerce_price_amount']['expose']['operator_id'] = 'commerce_price_amount_op';
  $handler->display->display_options['filters']['commerce_price_amount']['expose']['label'] = 'Cena';
  $handler->display->display_options['filters']['commerce_price_amount']['expose']['operator'] = 'commerce_price_amount_op';
  $handler->display->display_options['filters']['commerce_price_amount']['expose']['identifier'] = 'commerce_price_amount';
  $handler->display->display_options['filters']['commerce_price_amount']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Kategoria (field_product_category) */
  $handler->display->display_options['filters']['field_product_category_tid']['id'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['filters']['field_product_category_tid']['field'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['operator_id'] = 'field_product_category_tid_op';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['label'] = 'Kategoria';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['operator'] = 'field_product_category_tid_op';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['identifier'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_product_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_category_tid']['vocabulary'] = 'kategorie';
  $handler->display->display_options['filters']['field_product_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'product';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Produkty';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page tahonomy */
  $handler = $view->new_display('page', 'Page tahonomy', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'taxonomy/term/%';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Brak produktów spełniających parametry wyszukiwania, zmień opcję lub przejdź na stronę <a href="product">produktu</a>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Wszystko';
  $handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title'] = '%1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['breadcrumb'] = '%1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'kategorie' => 'kategorie',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
  /* Contextual filter: Content: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title'] = 'Wszystko';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'produkty' => 'produkty',
  );
  $handler->display->display_options['path'] = 'taxonomy/term/%';
  $translatables['product_page'] = array(
    t('Master'),
    t('Produkty'),
    t('więcej'),
    t('Zastosuj'),
    t('Przywróć'),
    t('Sortuj po'),
    t('Rosnąco'),
    t('Opis'),
    t('Elementów na stronę'),
    t('- Wszystko -'),
    t('Przesunięcie'),
    t('« pierwsza'),
    t('‹ poprzednia'),
    t('następna ›'),
    t('ostatnia »'),
    t('Brak produktów przejdź na stronę <a href="node/add/produkty">produktu</a> i dodaj pierwszy produkt.

Chcesz dodać język polski w sklepie, zaimportuj plik po z paczki modułu, <a href="admin/config/regional/translate/import">import pliku spolszczenia</a>'),
    t('Products referenced by field_dodaj_produkt'),
    t('Więcej'),
    t('Cena'),
    t('Page product'),
    t('Brak produktów przejdź na stronę <a href="node/add/produkty">produktu</a> i dodaj pierwszy produkt.

Chcesz dodać język polski w sklepie, zaimportuj plik po z paczki modułu, <a href="admin/config/regional/translate/import">import pliku spolszczenia</a>

Ustaw opcje konta bankowego w płatności, opcja dostępna pod adresem <a href="admin/commerce/config/payment-methods/manage/commerce_payment_bank_transfer/edit/3">ustawienia opcji numeru konta bankowego</a>'),
    t('Kategoria'),
    t('Page tahonomy'),
    t('taxonomy/term/%'),
    t('Brak produktów spełniających parametry wyszukiwania, zmień opcję lub przejdź na stronę <a href="product">produktu</a>'),
    t('Wszystko'),
    t('%1'),
  );
  $export['product_page'] = $view;

  return $export;
}
