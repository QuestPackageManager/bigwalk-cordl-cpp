#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/BaseStyleMatcher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseStyleMatcher)
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System::Text::RegularExpressions {
class Regex;
}
namespace UnityEngine::UIElements::StyleSheets::Syntax {
class Expression;
}
namespace UnityEngine::UIElements::StyleSheets {
struct BaseStyleMatcher_MatchContext;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
class BaseStyleMatcher;
}
namespace UnityEngine::UIElements::StyleSheets {
struct BaseStyleMatcher_MatchContext;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*);
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher_MatchContext);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*, "UnityEngine.UIElements.StyleSheets", "BaseStyleMatcher");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher_MatchContext, "UnityEngine.UIElements.StyleSheets", "BaseStyleMatcher/MatchContext");
// Dependencies 
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleSheets.BaseStyleMatcher/MatchContext
struct CORDL_TYPE BaseStyleMatcher_MatchContext {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BaseStyleMatcher_MatchContext() ;

// Ctor Parameters [CppParam { name: "valueIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "matchedVariableCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BaseStyleMatcher_MatchContext(int32_t  valueIndex, int32_t  matchedVariableCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4706};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field valueIndex, offset: 0x0, size: 0x4, def value: None
 int32_t  valueIndex;

/// @brief Field matchedVariableCount, offset: 0x4, size: 0x4, def value: None
 int32_t  matchedVariableCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher_MatchContext, valueIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher_MatchContext, matchedVariableCount) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher_MatchContext) == 0x8, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::StyleSheets
// Dependencies System.Object, UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::MatchContext
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleSheets.BaseStyleMatcher
class CORDL_TYPE BaseStyleMatcher : public ::System::Object {
public:
// Declarations
using MatchContext = ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher_MatchContext;

 __declspec(property(get=get_currentIndex, put=set_currentIndex)) int32_t  currentIndex;

 __declspec(property(get=get_hasCurrent)) bool  hasCurrent;

 __declspec(property(get=get_isCurrentComma)) bool  isCurrentComma;

 __declspec(property(get=get_isCurrentVariable)) bool  isCurrentVariable;

/// @brief Field m_ContextStack, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ContextStack, put=__cordl_internal_set_m_ContextStack)) ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher_MatchContext>*  m_ContextStack;

/// @brief Field m_CurrentContext, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CurrentContext, put=__cordl_internal_set_m_CurrentContext)) ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher_MatchContext  m_CurrentContext;

 __declspec(property(get=get_matchedVariableCount, put=set_matchedVariableCount)) int32_t  matchedVariableCount;

/// @brief Field s_CustomIdentRegex, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_CustomIdentRegex, put=setStaticF_s_CustomIdentRegex)) ::System::Text::RegularExpressions::Regex*  s_CustomIdentRegex;

 __declspec(property(get=get_valueCount)) int32_t  valueCount;

/// @brief Method DropContext, addr 0x182472770, size 0x10, virtual false, abstract: false, final false
inline void DropContext() ;

/// @brief Method Initialize, addr 0x182472780, size 0x20, virtual false, abstract: false, final false
inline void Initialize() ;

/// @brief Method Match, addr 0x1824731d0, size 0x140, virtual false, abstract: false, final false
inline bool Match(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*  exp) ;

/// @brief Method MatchAndAnd, addr 0x1824727a0, size 0x30, virtual false, abstract: false, final false
inline bool MatchAndAnd(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*  exp) ;

/// @brief Method MatchAngle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool MatchAngle() ;

/// @brief Method MatchColor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool MatchColor() ;

/// @brief Method MatchCombinator, addr 0x1824727d0, size 0x220, virtual false, abstract: false, final false
inline bool MatchCombinator(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*  exp) ;

/// @brief Method MatchCustomIdent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool MatchCustomIdent() ;

/// @brief Method MatchDataType, addr 0x1824729f0, size 0x1b0, virtual false, abstract: false, final false
inline bool MatchDataType(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*  exp) ;

/// @brief Method MatchExpression, addr 0x182472ca0, size 0x110, virtual false, abstract: false, final false
inline bool MatchExpression(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*  exp) ;

/// @brief Method MatchExpressionWithMultiplier, addr 0x182472ba0, size 0x100, virtual false, abstract: false, final false
inline bool MatchExpressionWithMultiplier(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*  exp) ;

/// @brief Method MatchFilterFunction, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool MatchFilterFunction() ;

/// @brief Method MatchGroup, addr 0x182472db0, size 0x50, virtual false, abstract: false, final false
inline bool MatchGroup(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*  exp) ;

/// @brief Method MatchInteger, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool MatchInteger() ;

/// @brief Method MatchJuxtaposition, addr 0x182472e00, size 0x70, virtual false, abstract: false, final false
inline bool MatchJuxtaposition(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*  exp) ;

/// @brief Method MatchKeyword, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool MatchKeyword(::StringW  keyword) ;

/// @brief Method MatchLength, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool MatchLength() ;

/// @brief Method MatchMany, addr 0x182472f90, size 0x140, virtual false, abstract: false, final false
inline int32_t MatchMany(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*  exp) ;

/// @brief Method MatchManyByOrder, addr 0x182472e70, size 0x120, virtual false, abstract: false, final false
inline int32_t MatchManyByOrder(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*  exp, int32_t*  matchOrder) ;

/// @brief Method MatchMaterialPropertyValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool MatchMaterialPropertyValue() ;

/// @brief Method MatchNumber, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool MatchNumber(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*  exp) ;

/// @brief Method MatchOr, addr 0x1824730f0, size 0xe0, virtual false, abstract: false, final false
inline bool MatchOr(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*  exp) ;

/// @brief Method MatchOrOr, addr 0x1824730d0, size 0x20, virtual false, abstract: false, final false
inline bool MatchOrOr(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*  exp) ;

/// @brief Method MatchPercentage, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool MatchPercentage() ;

/// @brief Method MatchResource, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool MatchResource() ;

/// @brief Method MatchTime, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool MatchTime() ;

/// @brief Method MatchUrl, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool MatchUrl() ;

/// @brief Method MoveNext, addr 0x182473310, size 0x40, virtual false, abstract: false, final false
inline void MoveNext() ;

static inline ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher* New_ctor() ;

/// @brief Method RestoreContext, addr 0x182473350, size 0x20, virtual false, abstract: false, final false
inline void RestoreContext() ;

/// @brief Method SaveContext, addr 0x182473370, size 0x20, virtual false, abstract: false, final false
inline void SaveContext() ;

constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher_MatchContext>* const& __cordl_internal_get_m_ContextStack() const;

constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher_MatchContext>*& __cordl_internal_get_m_ContextStack() ;

constexpr ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher_MatchContext const& __cordl_internal_get_m_CurrentContext() const;

constexpr ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher_MatchContext& __cordl_internal_get_m_CurrentContext() ;

constexpr void __cordl_internal_set_m_ContextStack(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher_MatchContext>*  value) ;

constexpr void __cordl_internal_set_m_CurrentContext(::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher_MatchContext  value) ;

/// @brief Method .ctor, addr 0x1824733f0, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Text::RegularExpressions::Regex* getStaticF_s_CustomIdentRegex() ;

/// @brief Method get_currentIndex, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_currentIndex() ;

/// @brief Method get_hasCurrent, addr 0x182473440, size 0x30, virtual false, abstract: false, final false
inline bool get_hasCurrent() ;

/// @brief Method get_isCurrentComma, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_isCurrentComma() ;

/// @brief Method get_isCurrentVariable, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_isCurrentVariable() ;

/// @brief Method get_matchedVariableCount, addr 0x1802f42c0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_matchedVariableCount() ;

/// @brief Method get_valueCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_valueCount() ;

static inline void setStaticF_s_CustomIdentRegex(::System::Text::RegularExpressions::Regex*  value) ;

/// @brief Method set_currentIndex, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void set_currentIndex(int32_t  value) ;

/// @brief Method set_matchedVariableCount, addr 0x1802f43d0, size 0x10, virtual false, abstract: false, final false
inline void set_matchedVariableCount(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseStyleMatcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseStyleMatcher", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseStyleMatcher(BaseStyleMatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseStyleMatcher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseStyleMatcher(BaseStyleMatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4707};

/// @brief Field m_ContextStack, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher_MatchContext>*  ___m_ContextStack;

/// @brief Field m_CurrentContext, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher_MatchContext  ___m_CurrentContext;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher, ___m_ContextStack) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher, ___m_CurrentContext) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::StyleSheets
