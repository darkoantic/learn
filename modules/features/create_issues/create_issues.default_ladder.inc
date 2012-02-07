<?php
/**
 * @file
 * create_issues.default_ladder.inc
 */

/**
 * Implements hook_default_ladder().
 */
function create_issues_default_ladder() {
  $export = array();

  $rung = new stdClass;
  $rung->disabled = FALSE; /* Edit this to true to make a default rung disabled initially */
  $rung->api_version = 1;
  $rung->ladder = 'drupal';
  $rung->name = 'create_issues';
  $rung->title = 'Get started: Create an issue, reproduce and confirm bugs, draft issue summary';
  $rung->description = '';
  $rung->lesson = 'create_issues';
  $rung->css_class = 'ladder-in-development';
  $rung->weight = 120;
  $export['create_issues'] = $rung;

  return $export;
}
