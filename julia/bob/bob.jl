response = Dict(
        :question => "Sure.",
        :yelling => "Whoa, chill out!",
        :silence => "Fine. Be that way!",
        :misc => "Whatever.",
        :forceful_question => "Calm down, I know what I'm doing!",
)

struct Stimulus
    last_char
    all_caps::Bool
    empty::Bool
    function Stimulus(text)
        striped_text = strip(text)
        if isempty(striped_text)
            new(striped_text, false, true)
        else
            last_char = striped_text[end]
            uppercase_test = [isuppercase(char) for char in filter(isletter, text)]
            all_caps = all(uppercase_test) & any(uppercase_test)
            new(last_char, all_caps, false)
        end
    end
end

function bob(stimulus)
    stimulus = Stimulus(stimulus)
    if stimulus.last_char == '?'
        if stimulus.all_caps == true
            key = :forceful_question
        else
            key = :question
        end
    elseif stimulus.all_caps == true
        key = :yelling
    elseif stimulus.empty == true
        key = :silence
    else
        key = :misc
    end
    return response[key]
end
