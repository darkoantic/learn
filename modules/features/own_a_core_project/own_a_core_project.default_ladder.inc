<?php
/**
 * @file
 * own_a_core_project.default_ladder.inc
 */

/**
 * Implements hook_default_ladder().
 */
function own_a_core_project_default_ladder() {
  $export = array();

  $rung = new stdClass;
  $rung->disabled = FALSE; /* Edit this to true to make a default rung disabled initially */
  $rung->api_version = 1;
  $rung->ladder = 'drupal';
  $rung->name = 'own_a_core_project';
  $rung->title = 'Own a core project';
  $rung->description = '';
  $rung->lesson = 'own_a_core_project';
  $rung->css_class = 'ladder-in-development';
  $rung->weight = 0;
  $export['own_a_core_project'] = $rung;

  return $export;
}
