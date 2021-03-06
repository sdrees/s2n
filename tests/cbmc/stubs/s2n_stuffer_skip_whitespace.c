/*
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License"). You may not use
 * this file except in compliance with the License. A copy of the License is
 * located at
 *
 *     http://aws.amazon.com/apache2.0/
 *
 * or in the "license" file accompanying this file. This file is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
 * implied. See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <cbmc_proof/nondet.h>

#include "api/s2n.h"
#include "stuffer/s2n_stuffer.h"
#include "utils/s2n_safety.h"

int s2n_stuffer_skip_whitespace(struct s2n_stuffer *s2n_stuffer, uint32_t *skipped)
{
    POSIX_PRECONDITION(s2n_stuffer_validate(s2n_stuffer));
    /*
     * This is stub is incomplete and it needs to update stuffer
     * cursors appropriately https://github.com/awslabs/s2n/issues/2173.
     */
    return nondet_bool() ? S2N_SUCCESS : S2N_FAILURE;
}
