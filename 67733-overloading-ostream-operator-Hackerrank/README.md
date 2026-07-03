# [Overloading Ostream Operator](https://www.hackerrank.com/challenges/overloading-ostream-operator/problem?isFullScreen=true)
## Medium
<div class="challenge-body-html"><div class="challenge_problem_statement"><div class="msB challenge_problem_statement_body"><div class="hackdown-content"><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><p>The task is to overload the &lt;&lt; operator for Person class in such a way that for <code>p</code> being an instance of class Person the result of:</p>

<div class="highlight"><pre><span></span><span class="n">std</span><span class="o">::</span><span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">p</span> <span class="o">&lt;&lt;</span> <span class="s">" "</span> <span class="o">&lt;&lt;</span> <span class="o">&lt;</span><span class="n">some_string_value</span><span class="o">&gt;</span> <span class="o">&lt;&lt;</span> <span class="n">std</span><span class="o">::</span><span class="n">endl</span><span class="p">;</span>
</pre></div>


<p>produces the following output:</p>

<div class="highlight"><pre><span></span><span class="n">first_name</span><span class="o">=&lt;</span><span class="n">first_name</span><span class="o">&gt;</span><span class="p">,</span><span class="n">last_name</span><span class="o">=&lt;</span><span class="n">last_name</span><span class="o">&gt;</span> <span class="o">&lt;</span><span class="n">some_string_value</span><span class="o">&gt;</span>
</pre></div>


<p>where:</p>

<ul>
<li><code>&lt;first_name&gt;</code> is the value of <code>p</code>'s <code>first_name_</code></li>
<li><code>&lt;last_name&gt;</code> is the value of <code>p</code>'s <code>last_name_</code></li>
<li><code>&lt;some_string_value&gt;</code> is an arbitrary <code>std::string value</code></li>
</ul></div></div></div><div class="challenge_input_format"><div class="msB challenge_input_format_title"><p><strong>Input Format</strong></p></div><div class="msB challenge_input_format_body"><div class="hackdown-content"><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><p>The input is read by the provided locked code template. In the only line of the input there are 3 space-separated strings <code>first_name</code>, <code>last_name</code>, <code>event</code>. The values of <code>first_name</code> and <code>last_name</code> will be used to create an object <code>p</code> of type Person. The value of <code>event</code> will be used by the provided code to produce the output.</p></div></div></div><div class="challenge_constraints"><div class="msB challenge_constraints_title"><p><strong>Constraints</strong></p></div><div class="msB challenge_constraints_body"><div class="hackdown-content"><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><ul>
<li>Each word in the input contains only English letters and is no longer than 15 characters</li>
</ul></div></div></div><div class="challenge_output_format"><div class="msB challenge_output_format_title"><p><strong>Output Format</strong></p></div><div class="msB challenge_output_format_body"><div class="hackdown-content"><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><p>The output should be produced by the provided locked code template. This code will use the implementation of Person public methods and the overloaded <code>&lt;&lt;</code> operator to produce the output. Specifically, the output wiil be produced by the following code:</p>

<div class="highlight"><pre><span></span><span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">p</span> <span class="o">&lt;&lt;</span> <span class="s">" "</span> <span class="o">&lt;&lt;</span> <span class="n">event</span> <span class="o">&lt;&lt;</span> <span class="n">endl</span><span class="p">;</span>
</pre></div>
</div></div></div><div class="challenge_sample_input"><div class="msB challenge_sample_input_title"><p><strong>Sample Input 0</strong></p></div><div class="msB challenge_sample_input_body"><div class="hackdown-content"><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><div class="highlight"><pre><span></span><span class="err">john doe registered</span>
</pre></div>
</div></div></div><div class="challenge_sample_output"><div class="msB challenge_sample_output_title"><p><strong>Sample Output 0</strong></p></div><div class="msB challenge_sample_output_body"><div class="hackdown-content"><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><div class="highlight"><pre><span></span><span class="err">first_name=john,last_name=doe registered</span>
</pre></div>
</div></div></div></div>