// Generated from c://Users//Veronica//Desktop//ScriptEditor//FrontEnd//antlr4//KeywordGrammar.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue"})
public class KeywordGrammarParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, WS=13, NEWLINE=14, Digit=15, NAME=16, INT=17, 
		FLOAT=18;
	public static final int
		RULE_start_ = 0, RULE_chunk = 1, RULE_block = 2, RULE_stat = 3, RULE_string = 4, 
		RULE_identifier = 5, RULE_objectIdentifier = 6, RULE_methodIdentifier = 7, 
		RULE_valIdentifier = 8, RULE_typeIdentifier = 9, RULE_paramenter = 10, 
		RULE_paramenterlist = 11, RULE_paramenterDef = 12, RULE_paramenterDeflist = 13, 
		RULE_objectdef = 14, RULE_objmethoddef = 15, RULE_methoddef = 16, RULE_valdef = 17, 
		RULE_valassignment = 18, RULE_methodcall = 19, RULE_objmethodcall = 20;
	private static String[] makeRuleNames() {
		return new String[] {
			"start_", "chunk", "block", "stat", "string", "identifier", "objectIdentifier", 
			"methodIdentifier", "valIdentifier", "typeIdentifier", "paramenter", 
			"paramenterlist", "paramenterDef", "paramenterDeflist", "objectdef", 
			"objmethoddef", "methoddef", "valdef", "valassignment", "methodcall", 
			"objmethodcall"
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

	@Override
	public String getGrammarFileName() { return "KeywordGrammar.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public KeywordGrammarParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Start_Context extends ParserRuleContext {
		public ChunkContext chunk() {
			return getRuleContext(ChunkContext.class,0);
		}
		public TerminalNode EOF() { return getToken(KeywordGrammarParser.EOF, 0); }
		public Start_Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_start_; }
	}

	public final Start_Context start_() throws RecognitionException {
		Start_Context _localctx = new Start_Context(_ctx, getState());
		enterRule(_localctx, 0, RULE_start_);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(42);
			chunk();
			setState(43);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ChunkContext extends ParserRuleContext {
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public ChunkContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_chunk; }
	}

	public final ChunkContext chunk() throws RecognitionException {
		ChunkContext _localctx = new ChunkContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_chunk);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(45);
			block();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class BlockContext extends ParserRuleContext {
		public List<StatContext> stat() {
			return getRuleContexts(StatContext.class);
		}
		public StatContext stat(int i) {
			return getRuleContext(StatContext.class,i);
		}
		public BlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_block; }
	}

	public final BlockContext block() throws RecognitionException {
		BlockContext _localctx = new BlockContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_block);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(50);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 66610L) != 0)) {
				{
				{
				setState(47);
				stat();
				}
				}
				setState(52);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class StatContext extends ParserRuleContext {
		public ObjectdefContext objectdef() {
			return getRuleContext(ObjectdefContext.class,0);
		}
		public ObjmethoddefContext objmethoddef() {
			return getRuleContext(ObjmethoddefContext.class,0);
		}
		public MethoddefContext methoddef() {
			return getRuleContext(MethoddefContext.class,0);
		}
		public ValdefContext valdef() {
			return getRuleContext(ValdefContext.class,0);
		}
		public ValassignmentContext valassignment() {
			return getRuleContext(ValassignmentContext.class,0);
		}
		public MethodcallContext methodcall() {
			return getRuleContext(MethodcallContext.class,0);
		}
		public ObjmethodcallContext objmethodcall() {
			return getRuleContext(ObjmethodcallContext.class,0);
		}
		public StatContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stat; }
	}

	public final StatContext stat() throws RecognitionException {
		StatContext _localctx = new StatContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_stat);
		try {
			setState(61);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(53);
				match(T__0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(54);
				objectdef();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(55);
				objmethoddef();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(56);
				methoddef();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(57);
				valdef();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(58);
				valassignment();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(59);
				methodcall();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(60);
				objmethodcall();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class StringContext extends ParserRuleContext {
		public TerminalNode NAME() { return getToken(KeywordGrammarParser.NAME, 0); }
		public StringContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_string; }
	}

	public final StringContext string() throws RecognitionException {
		StringContext _localctx = new StringContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_string);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(63);
			match(T__1);
			setState(64);
			match(NAME);
			setState(65);
			match(T__1);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class IdentifierContext extends ParserRuleContext {
		public TerminalNode NAME() { return getToken(KeywordGrammarParser.NAME, 0); }
		public IdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_identifier; }
	}

	public final IdentifierContext identifier() throws RecognitionException {
		IdentifierContext _localctx = new IdentifierContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_identifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(67);
			match(NAME);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ObjectIdentifierContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public ObjectIdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_objectIdentifier; }
	}

	public final ObjectIdentifierContext objectIdentifier() throws RecognitionException {
		ObjectIdentifierContext _localctx = new ObjectIdentifierContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_objectIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(69);
			identifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class MethodIdentifierContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public MethodIdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_methodIdentifier; }
	}

	public final MethodIdentifierContext methodIdentifier() throws RecognitionException {
		MethodIdentifierContext _localctx = new MethodIdentifierContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_methodIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(71);
			identifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ValIdentifierContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public ValIdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_valIdentifier; }
	}

	public final ValIdentifierContext valIdentifier() throws RecognitionException {
		ValIdentifierContext _localctx = new ValIdentifierContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_valIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(73);
			identifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TypeIdentifierContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TypeIdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeIdentifier; }
	}

	public final TypeIdentifierContext typeIdentifier() throws RecognitionException {
		TypeIdentifierContext _localctx = new TypeIdentifierContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_typeIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(75);
			identifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParamenterContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public StringContext string() {
			return getRuleContext(StringContext.class,0);
		}
		public TerminalNode INT() { return getToken(KeywordGrammarParser.INT, 0); }
		public TerminalNode FLOAT() { return getToken(KeywordGrammarParser.FLOAT, 0); }
		public ParamenterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_paramenter; }
	}

	public final ParamenterContext paramenter() throws RecognitionException {
		ParamenterContext _localctx = new ParamenterContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_paramenter);
		try {
			setState(81);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NAME:
				enterOuterAlt(_localctx, 1);
				{
				setState(77);
				identifier();
				}
				break;
			case T__1:
				enterOuterAlt(_localctx, 2);
				{
				setState(78);
				string();
				}
				break;
			case INT:
				enterOuterAlt(_localctx, 3);
				{
				setState(79);
				match(INT);
				}
				break;
			case FLOAT:
				enterOuterAlt(_localctx, 4);
				{
				setState(80);
				match(FLOAT);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParamenterlistContext extends ParserRuleContext {
		public List<ParamenterContext> paramenter() {
			return getRuleContexts(ParamenterContext.class);
		}
		public ParamenterContext paramenter(int i) {
			return getRuleContext(ParamenterContext.class,i);
		}
		public ParamenterlistContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_paramenterlist; }
	}

	public final ParamenterlistContext paramenterlist() throws RecognitionException {
		ParamenterlistContext _localctx = new ParamenterlistContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_paramenterlist);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(86);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 458756L) != 0)) {
				{
				{
				setState(83);
				paramenter();
				}
				}
				setState(88);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(93);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__2) {
				{
				{
				setState(89);
				match(T__2);
				setState(90);
				paramenter();
				}
				}
				setState(95);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParamenterDefContext extends ParserRuleContext {
		public TypeIdentifierContext typeIdentifier() {
			return getRuleContext(TypeIdentifierContext.class,0);
		}
		public ParamenterContext paramenter() {
			return getRuleContext(ParamenterContext.class,0);
		}
		public ParamenterDefContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_paramenterDef; }
	}

	public final ParamenterDefContext paramenterDef() throws RecognitionException {
		ParamenterDefContext _localctx = new ParamenterDefContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_paramenterDef);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(96);
			typeIdentifier();
			setState(97);
			paramenter();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParamenterDeflistContext extends ParserRuleContext {
		public List<ParamenterDefContext> paramenterDef() {
			return getRuleContexts(ParamenterDefContext.class);
		}
		public ParamenterDefContext paramenterDef(int i) {
			return getRuleContext(ParamenterDefContext.class,i);
		}
		public ParamenterDeflistContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_paramenterDeflist; }
	}

	public final ParamenterDeflistContext paramenterDeflist() throws RecognitionException {
		ParamenterDeflistContext _localctx = new ParamenterDeflistContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_paramenterDeflist);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(102);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NAME) {
				{
				{
				setState(99);
				paramenterDef();
				}
				}
				setState(104);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(109);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__2) {
				{
				{
				setState(105);
				match(T__2);
				setState(106);
				paramenterDef();
				}
				}
				setState(111);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ObjectdefContext extends ParserRuleContext {
		public ObjectIdentifierContext objectIdentifier() {
			return getRuleContext(ObjectIdentifierContext.class,0);
		}
		public ObjectdefContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_objectdef; }
	}

	public final ObjectdefContext objectdef() throws RecognitionException {
		ObjectdefContext _localctx = new ObjectdefContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_objectdef);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(112);
			match(T__3);
			setState(113);
			objectIdentifier();
			setState(114);
			match(T__0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ObjmethoddefContext extends ParserRuleContext {
		public ObjectIdentifierContext objectIdentifier() {
			return getRuleContext(ObjectIdentifierContext.class,0);
		}
		public MethodIdentifierContext methodIdentifier() {
			return getRuleContext(MethodIdentifierContext.class,0);
		}
		public ParamenterDeflistContext paramenterDeflist() {
			return getRuleContext(ParamenterDeflistContext.class,0);
		}
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public ObjmethoddefContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_objmethoddef; }
	}

	public final ObjmethoddefContext objmethoddef() throws RecognitionException {
		ObjmethoddefContext _localctx = new ObjmethoddefContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_objmethoddef);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(116);
			match(T__4);
			setState(117);
			match(T__5);
			setState(118);
			objectIdentifier();
			setState(119);
			match(T__6);
			setState(120);
			methodIdentifier();
			setState(121);
			match(T__5);
			setState(122);
			paramenterDeflist();
			setState(123);
			match(T__6);
			setState(124);
			match(T__7);
			setState(125);
			block();
			setState(126);
			match(T__8);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class MethoddefContext extends ParserRuleContext {
		public MethodIdentifierContext methodIdentifier() {
			return getRuleContext(MethodIdentifierContext.class,0);
		}
		public ParamenterDeflistContext paramenterDeflist() {
			return getRuleContext(ParamenterDeflistContext.class,0);
		}
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public MethoddefContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_methoddef; }
	}

	public final MethoddefContext methoddef() throws RecognitionException {
		MethoddefContext _localctx = new MethoddefContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_methoddef);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(128);
			match(T__4);
			setState(129);
			methodIdentifier();
			setState(130);
			match(T__5);
			setState(131);
			paramenterDeflist();
			setState(132);
			match(T__6);
			setState(133);
			match(T__7);
			setState(134);
			block();
			setState(135);
			match(T__8);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ValdefContext extends ParserRuleContext {
		public TypeIdentifierContext typeIdentifier() {
			return getRuleContext(TypeIdentifierContext.class,0);
		}
		public ValIdentifierContext valIdentifier() {
			return getRuleContext(ValIdentifierContext.class,0);
		}
		public ValdefContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_valdef; }
	}

	public final ValdefContext valdef() throws RecognitionException {
		ValdefContext _localctx = new ValdefContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_valdef);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(137);
			match(T__9);
			setState(138);
			typeIdentifier();
			setState(139);
			valIdentifier();
			setState(140);
			match(T__0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ValassignmentContext extends ParserRuleContext {
		public List<ValIdentifierContext> valIdentifier() {
			return getRuleContexts(ValIdentifierContext.class);
		}
		public ValIdentifierContext valIdentifier(int i) {
			return getRuleContext(ValIdentifierContext.class,i);
		}
		public StringContext string() {
			return getRuleContext(StringContext.class,0);
		}
		public TerminalNode INT() { return getToken(KeywordGrammarParser.INT, 0); }
		public TerminalNode FLOAT() { return getToken(KeywordGrammarParser.FLOAT, 0); }
		public ValassignmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_valassignment; }
	}

	public final ValassignmentContext valassignment() throws RecognitionException {
		ValassignmentContext _localctx = new ValassignmentContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_valassignment);
		try {
			setState(167);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,7,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(142);
				valIdentifier();
				setState(143);
				match(T__10);
				setState(144);
				valIdentifier();
				setState(145);
				match(T__0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(147);
				valIdentifier();
				setState(148);
				match(T__10);
				setState(149);
				string();
				setState(150);
				match(T__0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(152);
				valIdentifier();
				setState(153);
				match(T__10);
				setState(154);
				string();
				setState(155);
				match(T__0);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(157);
				valIdentifier();
				setState(158);
				match(T__10);
				setState(159);
				match(INT);
				setState(160);
				match(T__0);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(162);
				valIdentifier();
				setState(163);
				match(T__10);
				setState(164);
				match(FLOAT);
				setState(165);
				match(T__0);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class MethodcallContext extends ParserRuleContext {
		public MethodIdentifierContext methodIdentifier() {
			return getRuleContext(MethodIdentifierContext.class,0);
		}
		public ParamenterlistContext paramenterlist() {
			return getRuleContext(ParamenterlistContext.class,0);
		}
		public MethodcallContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_methodcall; }
	}

	public final MethodcallContext methodcall() throws RecognitionException {
		MethodcallContext _localctx = new MethodcallContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_methodcall);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(169);
			methodIdentifier();
			setState(170);
			match(T__5);
			setState(171);
			paramenterlist();
			setState(172);
			match(T__6);
			setState(173);
			match(T__0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ObjmethodcallContext extends ParserRuleContext {
		public ObjectIdentifierContext objectIdentifier() {
			return getRuleContext(ObjectIdentifierContext.class,0);
		}
		public MethodIdentifierContext methodIdentifier() {
			return getRuleContext(MethodIdentifierContext.class,0);
		}
		public ParamenterlistContext paramenterlist() {
			return getRuleContext(ParamenterlistContext.class,0);
		}
		public ObjmethodcallContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_objmethodcall; }
	}

	public final ObjmethodcallContext objmethodcall() throws RecognitionException {
		ObjmethodcallContext _localctx = new ObjmethodcallContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_objmethodcall);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(175);
			objectIdentifier();
			setState(176);
			match(T__11);
			setState(177);
			methodIdentifier();
			setState(178);
			match(T__5);
			setState(179);
			paramenterlist();
			setState(180);
			match(T__6);
			setState(181);
			match(T__0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\u0004\u0001\u0012\u00b8\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001"+
		"\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004"+
		"\u0002\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007"+
		"\u0002\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b"+
		"\u0002\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002\u000f\u0007"+
		"\u000f\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0002\u0012\u0007"+
		"\u0012\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014\u0001\u0000\u0001"+
		"\u0000\u0001\u0000\u0001\u0001\u0001\u0001\u0001\u0002\u0005\u00021\b"+
		"\u0002\n\u0002\f\u00024\t\u0002\u0001\u0003\u0001\u0003\u0001\u0003\u0001"+
		"\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0003\u0003>\b"+
		"\u0003\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0005\u0001"+
		"\u0005\u0001\u0006\u0001\u0006\u0001\u0007\u0001\u0007\u0001\b\u0001\b"+
		"\u0001\t\u0001\t\u0001\n\u0001\n\u0001\n\u0001\n\u0003\nR\b\n\u0001\u000b"+
		"\u0005\u000bU\b\u000b\n\u000b\f\u000bX\t\u000b\u0001\u000b\u0001\u000b"+
		"\u0005\u000b\\\b\u000b\n\u000b\f\u000b_\t\u000b\u0001\f\u0001\f\u0001"+
		"\f\u0001\r\u0005\re\b\r\n\r\f\rh\t\r\u0001\r\u0001\r\u0005\rl\b\r\n\r"+
		"\f\ro\t\r\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000f"+
		"\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f"+
		"\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u0010"+
		"\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010"+
		"\u0001\u0010\u0001\u0010\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011"+
		"\u0001\u0011\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012"+
		"\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012"+
		"\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012"+
		"\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012"+
		"\u0001\u0012\u0001\u0012\u0003\u0012\u00a8\b\u0012\u0001\u0013\u0001\u0013"+
		"\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0014\u0001\u0014"+
		"\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014"+
		"\u0001\u0014\u0000\u0000\u0015\u0000\u0002\u0004\u0006\b\n\f\u000e\u0010"+
		"\u0012\u0014\u0016\u0018\u001a\u001c\u001e \"$&(\u0000\u0000\u00b5\u0000"+
		"*\u0001\u0000\u0000\u0000\u0002-\u0001\u0000\u0000\u0000\u00042\u0001"+
		"\u0000\u0000\u0000\u0006=\u0001\u0000\u0000\u0000\b?\u0001\u0000\u0000"+
		"\u0000\nC\u0001\u0000\u0000\u0000\fE\u0001\u0000\u0000\u0000\u000eG\u0001"+
		"\u0000\u0000\u0000\u0010I\u0001\u0000\u0000\u0000\u0012K\u0001\u0000\u0000"+
		"\u0000\u0014Q\u0001\u0000\u0000\u0000\u0016V\u0001\u0000\u0000\u0000\u0018"+
		"`\u0001\u0000\u0000\u0000\u001af\u0001\u0000\u0000\u0000\u001cp\u0001"+
		"\u0000\u0000\u0000\u001et\u0001\u0000\u0000\u0000 \u0080\u0001\u0000\u0000"+
		"\u0000\"\u0089\u0001\u0000\u0000\u0000$\u00a7\u0001\u0000\u0000\u0000"+
		"&\u00a9\u0001\u0000\u0000\u0000(\u00af\u0001\u0000\u0000\u0000*+\u0003"+
		"\u0002\u0001\u0000+,\u0005\u0000\u0000\u0001,\u0001\u0001\u0000\u0000"+
		"\u0000-.\u0003\u0004\u0002\u0000.\u0003\u0001\u0000\u0000\u0000/1\u0003"+
		"\u0006\u0003\u00000/\u0001\u0000\u0000\u000014\u0001\u0000\u0000\u0000"+
		"20\u0001\u0000\u0000\u000023\u0001\u0000\u0000\u00003\u0005\u0001\u0000"+
		"\u0000\u000042\u0001\u0000\u0000\u00005>\u0005\u0001\u0000\u00006>\u0003"+
		"\u001c\u000e\u00007>\u0003\u001e\u000f\u00008>\u0003 \u0010\u00009>\u0003"+
		"\"\u0011\u0000:>\u0003$\u0012\u0000;>\u0003&\u0013\u0000<>\u0003(\u0014"+
		"\u0000=5\u0001\u0000\u0000\u0000=6\u0001\u0000\u0000\u0000=7\u0001\u0000"+
		"\u0000\u0000=8\u0001\u0000\u0000\u0000=9\u0001\u0000\u0000\u0000=:\u0001"+
		"\u0000\u0000\u0000=;\u0001\u0000\u0000\u0000=<\u0001\u0000\u0000\u0000"+
		">\u0007\u0001\u0000\u0000\u0000?@\u0005\u0002\u0000\u0000@A\u0005\u0010"+
		"\u0000\u0000AB\u0005\u0002\u0000\u0000B\t\u0001\u0000\u0000\u0000CD\u0005"+
		"\u0010\u0000\u0000D\u000b\u0001\u0000\u0000\u0000EF\u0003\n\u0005\u0000"+
		"F\r\u0001\u0000\u0000\u0000GH\u0003\n\u0005\u0000H\u000f\u0001\u0000\u0000"+
		"\u0000IJ\u0003\n\u0005\u0000J\u0011\u0001\u0000\u0000\u0000KL\u0003\n"+
		"\u0005\u0000L\u0013\u0001\u0000\u0000\u0000MR\u0003\n\u0005\u0000NR\u0003"+
		"\b\u0004\u0000OR\u0005\u0011\u0000\u0000PR\u0005\u0012\u0000\u0000QM\u0001"+
		"\u0000\u0000\u0000QN\u0001\u0000\u0000\u0000QO\u0001\u0000\u0000\u0000"+
		"QP\u0001\u0000\u0000\u0000R\u0015\u0001\u0000\u0000\u0000SU\u0003\u0014"+
		"\n\u0000TS\u0001\u0000\u0000\u0000UX\u0001\u0000\u0000\u0000VT\u0001\u0000"+
		"\u0000\u0000VW\u0001\u0000\u0000\u0000W]\u0001\u0000\u0000\u0000XV\u0001"+
		"\u0000\u0000\u0000YZ\u0005\u0003\u0000\u0000Z\\\u0003\u0014\n\u0000[Y"+
		"\u0001\u0000\u0000\u0000\\_\u0001\u0000\u0000\u0000][\u0001\u0000\u0000"+
		"\u0000]^\u0001\u0000\u0000\u0000^\u0017\u0001\u0000\u0000\u0000_]\u0001"+
		"\u0000\u0000\u0000`a\u0003\u0012\t\u0000ab\u0003\u0014\n\u0000b\u0019"+
		"\u0001\u0000\u0000\u0000ce\u0003\u0018\f\u0000dc\u0001\u0000\u0000\u0000"+
		"eh\u0001\u0000\u0000\u0000fd\u0001\u0000\u0000\u0000fg\u0001\u0000\u0000"+
		"\u0000gm\u0001\u0000\u0000\u0000hf\u0001\u0000\u0000\u0000ij\u0005\u0003"+
		"\u0000\u0000jl\u0003\u0018\f\u0000ki\u0001\u0000\u0000\u0000lo\u0001\u0000"+
		"\u0000\u0000mk\u0001\u0000\u0000\u0000mn\u0001\u0000\u0000\u0000n\u001b"+
		"\u0001\u0000\u0000\u0000om\u0001\u0000\u0000\u0000pq\u0005\u0004\u0000"+
		"\u0000qr\u0003\f\u0006\u0000rs\u0005\u0001\u0000\u0000s\u001d\u0001\u0000"+
		"\u0000\u0000tu\u0005\u0005\u0000\u0000uv\u0005\u0006\u0000\u0000vw\u0003"+
		"\f\u0006\u0000wx\u0005\u0007\u0000\u0000xy\u0003\u000e\u0007\u0000yz\u0005"+
		"\u0006\u0000\u0000z{\u0003\u001a\r\u0000{|\u0005\u0007\u0000\u0000|}\u0005"+
		"\b\u0000\u0000}~\u0003\u0004\u0002\u0000~\u007f\u0005\t\u0000\u0000\u007f"+
		"\u001f\u0001\u0000\u0000\u0000\u0080\u0081\u0005\u0005\u0000\u0000\u0081"+
		"\u0082\u0003\u000e\u0007\u0000\u0082\u0083\u0005\u0006\u0000\u0000\u0083"+
		"\u0084\u0003\u001a\r\u0000\u0084\u0085\u0005\u0007\u0000\u0000\u0085\u0086"+
		"\u0005\b\u0000\u0000\u0086\u0087\u0003\u0004\u0002\u0000\u0087\u0088\u0005"+
		"\t\u0000\u0000\u0088!\u0001\u0000\u0000\u0000\u0089\u008a\u0005\n\u0000"+
		"\u0000\u008a\u008b\u0003\u0012\t\u0000\u008b\u008c\u0003\u0010\b\u0000"+
		"\u008c\u008d\u0005\u0001\u0000\u0000\u008d#\u0001\u0000\u0000\u0000\u008e"+
		"\u008f\u0003\u0010\b\u0000\u008f\u0090\u0005\u000b\u0000\u0000\u0090\u0091"+
		"\u0003\u0010\b\u0000\u0091\u0092\u0005\u0001\u0000\u0000\u0092\u00a8\u0001"+
		"\u0000\u0000\u0000\u0093\u0094\u0003\u0010\b\u0000\u0094\u0095\u0005\u000b"+
		"\u0000\u0000\u0095\u0096\u0003\b\u0004\u0000\u0096\u0097\u0005\u0001\u0000"+
		"\u0000\u0097\u00a8\u0001\u0000\u0000\u0000\u0098\u0099\u0003\u0010\b\u0000"+
		"\u0099\u009a\u0005\u000b\u0000\u0000\u009a\u009b\u0003\b\u0004\u0000\u009b"+
		"\u009c\u0005\u0001\u0000\u0000\u009c\u00a8\u0001\u0000\u0000\u0000\u009d"+
		"\u009e\u0003\u0010\b\u0000\u009e\u009f\u0005\u000b\u0000\u0000\u009f\u00a0"+
		"\u0005\u0011\u0000\u0000\u00a0\u00a1\u0005\u0001\u0000\u0000\u00a1\u00a8"+
		"\u0001\u0000\u0000\u0000\u00a2\u00a3\u0003\u0010\b\u0000\u00a3\u00a4\u0005"+
		"\u000b\u0000\u0000\u00a4\u00a5\u0005\u0012\u0000\u0000\u00a5\u00a6\u0005"+
		"\u0001\u0000\u0000\u00a6\u00a8\u0001\u0000\u0000\u0000\u00a7\u008e\u0001"+
		"\u0000\u0000\u0000\u00a7\u0093\u0001\u0000\u0000\u0000\u00a7\u0098\u0001"+
		"\u0000\u0000\u0000\u00a7\u009d\u0001\u0000\u0000\u0000\u00a7\u00a2\u0001"+
		"\u0000\u0000\u0000\u00a8%\u0001\u0000\u0000\u0000\u00a9\u00aa\u0003\u000e"+
		"\u0007\u0000\u00aa\u00ab\u0005\u0006\u0000\u0000\u00ab\u00ac\u0003\u0016"+
		"\u000b\u0000\u00ac\u00ad\u0005\u0007\u0000\u0000\u00ad\u00ae\u0005\u0001"+
		"\u0000\u0000\u00ae\'\u0001\u0000\u0000\u0000\u00af\u00b0\u0003\f\u0006"+
		"\u0000\u00b0\u00b1\u0005\f\u0000\u0000\u00b1\u00b2\u0003\u000e\u0007\u0000"+
		"\u00b2\u00b3\u0005\u0006\u0000\u0000\u00b3\u00b4\u0003\u0016\u000b\u0000"+
		"\u00b4\u00b5\u0005\u0007\u0000\u0000\u00b5\u00b6\u0005\u0001\u0000\u0000"+
		"\u00b6)\u0001\u0000\u0000\u0000\b2=QV]fm\u00a7";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}