// Generated from c://Users//Veronica//Desktop//ScriptEditor//FrontEnd//antlr4//KeywordGrammar.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue", "this-escape"})
public class KeywordGrammarLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, WS=13, NEWLINE=14, Digit=15, NAME=16, INT=17, 
		FLOAT=18;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
			"T__9", "T__10", "T__11", "WS", "NEWLINE", "Digit", "NAME", "INT", "FLOAT"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "';'", "'\"'", "','", "'object'", "'method'", "'('", "')'", "'{'", 
			"'}'", "'val'", "'='", "'.'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, "WS", "NEWLINE", "Digit", "NAME", "INT", "FLOAT"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}


	public KeywordGrammarLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "KeywordGrammar.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\u0004\u0000\u0012n\u0006\uffff\uffff\u0002\u0000\u0007\u0000\u0002\u0001"+
		"\u0007\u0001\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004"+
		"\u0007\u0004\u0002\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007"+
		"\u0007\u0007\u0002\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b"+
		"\u0007\u000b\u0002\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002"+
		"\u000f\u0007\u000f\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0001"+
		"\u0000\u0001\u0000\u0001\u0001\u0001\u0001\u0001\u0002\u0001\u0002\u0001"+
		"\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001"+
		"\u0003\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001"+
		"\u0004\u0001\u0004\u0001\u0005\u0001\u0005\u0001\u0006\u0001\u0006\u0001"+
		"\u0007\u0001\u0007\u0001\b\u0001\b\u0001\t\u0001\t\u0001\t\u0001\t\u0001"+
		"\n\u0001\n\u0001\u000b\u0001\u000b\u0001\f\u0004\fK\b\f\u000b\f\f\fL\u0001"+
		"\f\u0001\f\u0001\r\u0001\r\u0001\r\u0001\r\u0001\u000e\u0001\u000e\u0001"+
		"\u000f\u0001\u000f\u0005\u000fY\b\u000f\n\u000f\f\u000f\\\t\u000f\u0001"+
		"\u0010\u0004\u0010_\b\u0010\u000b\u0010\f\u0010`\u0001\u0011\u0004\u0011"+
		"d\b\u0011\u000b\u0011\f\u0011e\u0001\u0011\u0001\u0011\u0005\u0011j\b"+
		"\u0011\n\u0011\f\u0011m\t\u0011\u0000\u0000\u0012\u0001\u0001\u0003\u0002"+
		"\u0005\u0003\u0007\u0004\t\u0005\u000b\u0006\r\u0007\u000f\b\u0011\t\u0013"+
		"\n\u0015\u000b\u0017\f\u0019\r\u001b\u000e\u001d\u000f\u001f\u0010!\u0011"+
		"#\u0012\u0001\u0000\u0005\u0003\u0000\t\t\f\r  \u0001\u0000\n\n\u0001"+
		"\u000009\u0003\u0000AZ__az\u0004\u000009AZ__azr\u0000\u0001\u0001\u0000"+
		"\u0000\u0000\u0000\u0003\u0001\u0000\u0000\u0000\u0000\u0005\u0001\u0000"+
		"\u0000\u0000\u0000\u0007\u0001\u0000\u0000\u0000\u0000\t\u0001\u0000\u0000"+
		"\u0000\u0000\u000b\u0001\u0000\u0000\u0000\u0000\r\u0001\u0000\u0000\u0000"+
		"\u0000\u000f\u0001\u0000\u0000\u0000\u0000\u0011\u0001\u0000\u0000\u0000"+
		"\u0000\u0013\u0001\u0000\u0000\u0000\u0000\u0015\u0001\u0000\u0000\u0000"+
		"\u0000\u0017\u0001\u0000\u0000\u0000\u0000\u0019\u0001\u0000\u0000\u0000"+
		"\u0000\u001b\u0001\u0000\u0000\u0000\u0000\u001d\u0001\u0000\u0000\u0000"+
		"\u0000\u001f\u0001\u0000\u0000\u0000\u0000!\u0001\u0000\u0000\u0000\u0000"+
		"#\u0001\u0000\u0000\u0000\u0001%\u0001\u0000\u0000\u0000\u0003\'\u0001"+
		"\u0000\u0000\u0000\u0005)\u0001\u0000\u0000\u0000\u0007+\u0001\u0000\u0000"+
		"\u0000\t2\u0001\u0000\u0000\u0000\u000b9\u0001\u0000\u0000\u0000\r;\u0001"+
		"\u0000\u0000\u0000\u000f=\u0001\u0000\u0000\u0000\u0011?\u0001\u0000\u0000"+
		"\u0000\u0013A\u0001\u0000\u0000\u0000\u0015E\u0001\u0000\u0000\u0000\u0017"+
		"G\u0001\u0000\u0000\u0000\u0019J\u0001\u0000\u0000\u0000\u001bP\u0001"+
		"\u0000\u0000\u0000\u001dT\u0001\u0000\u0000\u0000\u001fV\u0001\u0000\u0000"+
		"\u0000!^\u0001\u0000\u0000\u0000#c\u0001\u0000\u0000\u0000%&\u0005;\u0000"+
		"\u0000&\u0002\u0001\u0000\u0000\u0000\'(\u0005\"\u0000\u0000(\u0004\u0001"+
		"\u0000\u0000\u0000)*\u0005,\u0000\u0000*\u0006\u0001\u0000\u0000\u0000"+
		"+,\u0005o\u0000\u0000,-\u0005b\u0000\u0000-.\u0005j\u0000\u0000./\u0005"+
		"e\u0000\u0000/0\u0005c\u0000\u000001\u0005t\u0000\u00001\b\u0001\u0000"+
		"\u0000\u000023\u0005m\u0000\u000034\u0005e\u0000\u000045\u0005t\u0000"+
		"\u000056\u0005h\u0000\u000067\u0005o\u0000\u000078\u0005d\u0000\u0000"+
		"8\n\u0001\u0000\u0000\u00009:\u0005(\u0000\u0000:\f\u0001\u0000\u0000"+
		"\u0000;<\u0005)\u0000\u0000<\u000e\u0001\u0000\u0000\u0000=>\u0005{\u0000"+
		"\u0000>\u0010\u0001\u0000\u0000\u0000?@\u0005}\u0000\u0000@\u0012\u0001"+
		"\u0000\u0000\u0000AB\u0005v\u0000\u0000BC\u0005a\u0000\u0000CD\u0005l"+
		"\u0000\u0000D\u0014\u0001\u0000\u0000\u0000EF\u0005=\u0000\u0000F\u0016"+
		"\u0001\u0000\u0000\u0000GH\u0005.\u0000\u0000H\u0018\u0001\u0000\u0000"+
		"\u0000IK\u0007\u0000\u0000\u0000JI\u0001\u0000\u0000\u0000KL\u0001\u0000"+
		"\u0000\u0000LJ\u0001\u0000\u0000\u0000LM\u0001\u0000\u0000\u0000MN\u0001"+
		"\u0000\u0000\u0000NO\u0006\f\u0000\u0000O\u001a\u0001\u0000\u0000\u0000"+
		"PQ\u0007\u0001\u0000\u0000QR\u0001\u0000\u0000\u0000RS\u0006\r\u0000\u0000"+
		"S\u001c\u0001\u0000\u0000\u0000TU\u0007\u0002\u0000\u0000U\u001e\u0001"+
		"\u0000\u0000\u0000VZ\u0007\u0003\u0000\u0000WY\u0007\u0004\u0000\u0000"+
		"XW\u0001\u0000\u0000\u0000Y\\\u0001\u0000\u0000\u0000ZX\u0001\u0000\u0000"+
		"\u0000Z[\u0001\u0000\u0000\u0000[ \u0001\u0000\u0000\u0000\\Z\u0001\u0000"+
		"\u0000\u0000]_\u0003\u001d\u000e\u0000^]\u0001\u0000\u0000\u0000_`\u0001"+
		"\u0000\u0000\u0000`^\u0001\u0000\u0000\u0000`a\u0001\u0000\u0000\u0000"+
		"a\"\u0001\u0000\u0000\u0000bd\u0003\u001d\u000e\u0000cb\u0001\u0000\u0000"+
		"\u0000de\u0001\u0000\u0000\u0000ec\u0001\u0000\u0000\u0000ef\u0001\u0000"+
		"\u0000\u0000fg\u0001\u0000\u0000\u0000gk\u0005.\u0000\u0000hj\u0003\u001d"+
		"\u000e\u0000ih\u0001\u0000\u0000\u0000jm\u0001\u0000\u0000\u0000ki\u0001"+
		"\u0000\u0000\u0000kl\u0001\u0000\u0000\u0000l$\u0001\u0000\u0000\u0000"+
		"mk\u0001\u0000\u0000\u0000\u0006\u0000LZ`ek\u0001\u0000\u0001\u0000";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}