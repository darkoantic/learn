<?php
/**
 * @file
 * create_issues.default_lessons.inc
 */

/**
 * Implements hook_default_lessons().
 */
function create_issues_default_lessons() {
  $export = array();

  $lessons = new stdClass;
  $lessons->disabled = FALSE; /* Edit this to true to make a default lessons disabled initially */
  $lessons->api_version = 1;
  $lessons->name = 'create_issues';
  $lessons->title = 'Getting started: Create an issue, reproduce and confirm bugs, draft issue summary ';
  $lessons->author = '';
  $lessons->project = 'learn_drupal';
  $lessons->project_type = 'core';
  $lessons->lesson_type = 'configuration';
  $lessons->description = 'By the end of this exercise you will know how to post and contribute to issues in the Drupal issue queue';
  $lessons->version = '';
  $lessons->steps = 'Please move these steps here: 
https://docs.google.com/document/d/1hBwTOKHE2tIn2KMg6ziyuFOUmssbjQk4zSwyPvy3kvc/edit';
  $lessons->permission = '';
  $export['create_issues'] = $lessons;

  return $export;
}
