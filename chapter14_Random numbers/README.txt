Extracted C programs containing main() from the supplied Chapter 14 source.
Each program has a multiline comment before the #include directives and additional inline comments.

14.1	14.1.rand_first_look.c	The rand() Function: A First Look
14.2	14.2.seed_with_clock.c	Seeding with clock() and time(NULL)
14.3	14.3.seed_with_time.c	Seeding with clock() and time(NULL)
14.4	14.4.fixed_seed_1234.c	Seeding with a Fixed, Chosen Value
14.5	14.5.fixed_seed_0.c	Seeding with a Fixed, Chosen Value
14.6	14.6.guessing_game_no_seed.c	Version 1: A Broken Game — No Seeding at All
14.7	14.7.guessing_game_clock_seed.c	Version 2: Seeding with clock() to Vary Each Run
14.8	14.8.guessing_game_rdtsc_seed.c	Version 3: Strengthening the Seed with __rdtsc()
14.9	14.9.weighted_dice_roll_game.c	A Larger Application: Simulating a Weighted Dice Roll Game
14.10	14.10.trng16_clock.c	The Three Generator Functions: trng16(), trng32(), trng64()
14.11	14.11.trng32_clock.c	The Three Generator Functions: trng16(), trng32(), trng64()
14.12	14.12.trng64_clock.c	The Three Generator Functions: trng16(), trng32(), trng64()
14.13	14.13.trng_instrumented_trace.c	Tracing the Algorithm Step by Step, with Instrumentation
14.14	14.14.trng_with_explicit_delay.c	Fixing Windows Behavior with an Explicit Delay
14.15	14.15.trng_with_randomized_delay.c	Strengthening Unpredictability with a Randomized Delay
14.16	14.16.trng_with_bounded_delay.c	Bounding the Delay to a Reasonable Range
14.17	14.17.trng_custom_range.c	Generating a Random Number Within a Custom Range
14.18	14.18.trng_clock_generator.c	The Program
14.19	14.19.observe_memory_addresses.c	Step 1: Observing That Addresses Change Between Runs
14.20	14.20.address_clock_seed.c	Step 2: A First Attempt — Address as a Seed, Mixed with clock()
14.21	14.21.address_clock_64bit.c	Step 3: The 64-Bit Version
14.22	14.22.fibonacci_address_mixer.c	Step 4: Removing clock() Entirely — A Fibonacci-Style Address Mixer
14.23	14.23.address_rdtsc_mixer.c	Strengthening Further: Combining Address with RDTSC
14.24	14.24.lcg_user_seed.c	Version 1: A User-Supplied Seed
14.25	14.25.lcg_internal_seed_no_persistence.c	Version 2: Removing the User — But Breaking Persistence
14.26	14.26.lcg_static_seed.c	Version 3: Fixing Persistence with static
14.27	14.27.lcg_define_constants.c	Version 4: Using #define for the Constants
14.28	14.28.seed_free_generator.c	Version 1: A Self-Contained, Seed-Free Generator
14.29	14.29.parameter_seed_no_persistence.c	Version 2: Taking the Seed as a Parameter — But Losing Persistence
14.30	14.30.static_seed_and_z.c	Version 3: Layering in static seed and static z
14.31	14.31.parameter_seed_bug.c	Version 4: Passing the Seed as a Parameter — But Introducing a New Bug
14.32	14.32.hash_prng_seed_parameter.c	Version 1: A Seed-Parameter Hash-Based Generator
14.33	14.33.hash_prng_static_seed.c	Version 2: Internalizing the Seed with static
14.34	14.34.prng32_h_bit_by_bit.c	Version 3: Generating Bit by Bit — prng32_h()
14.35	14.35.prng32_sh_unpredictable_seed.c	Version 4: Making the Seed Unpredictable — prng32_sh()
14.36	14.36.trng32_ach.c	Version 5: A Full TRNG Built on the Hash-Mixing Core — trng32_ach()
14.37	14.37.trng32_ch.c	Version 6: When Addresses Aren't Available — trng32_ch()
14.38	14.38.librand_guessing_game.c	Using the Library: A Non-Reproducible Guessing Game
14.39	14.39.dice_distribution_rand.c	Experiment 1: Measuring the Distribution with Reproducible rand()
14.40	14.40.dice_distribution_clock_seed.c	Experiment 2: A Non-Reproducible Version with srand(clock())
14.41	14.41.librand_distribution.c	Bringing It Together with librand.h
14.42	14.42.guess_most_frequent_face_game.c	The Full Interactive "Guess the Most Frequent Face" Game
