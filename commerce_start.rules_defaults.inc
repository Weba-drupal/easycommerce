<?php
/**
 * @file
 * commerce_start.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function commerce_start_default_rules_configuration() {
  $items = array();
  $items['commerce_tax_rate_vat'] = entity_import('rules_config', '{ "commerce_tax_rate_vat" : {
      "LABEL" : "Oblicz VAT",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Tax", "vat" ],
      "REQUIRES" : [ "commerce_tax" ],
      "USES VARIABLES" : { "commerce_line_item" : { "type" : "commerce_line_item", "label" : "Pozycja zamówienia" } },
      "DO" : [
        { "commerce_tax_rate_apply" : {
            "USING" : {
              "commerce_line_item" : [ "commerce-line-item" ],
              "tax_rate_name" : "vat"
            },
            "PROVIDE" : { "applied_tax" : { "applied_tax" : "Zastosowany podatek" } }
          }
        }
      ]
    }
  }');
  return $items;
}
