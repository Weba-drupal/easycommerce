<?php
/**
 * @file
 * commerce_start.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function commerce_start_taxonomy_default_vocabularies() {
  return array(
    'kategorie' => array(
      'name' => 'Kategorie',
      'machine_name' => 'kategorie',
      'description' => 'Kategorie produktu',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
