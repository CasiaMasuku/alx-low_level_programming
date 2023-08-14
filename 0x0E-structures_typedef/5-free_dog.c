/**
 * free_dog -  frees dogs
 * @d: considered dog to be freed
 *
 * Return: no return
 */
void free_dog(dog_t *d)
{
if (d == NULL)
{
return;
}
if (d->name != NULL)
{
free(d->name);
}
if (d->owner != NULL)
{
free(d->owner);
}
free(d);
}
