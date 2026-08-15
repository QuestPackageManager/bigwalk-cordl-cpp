#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/DiagnosticsExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DiagnosticsExtensions)
namespace Cysharp::Threading::Tasks::Internal {
class DiagnosticsExtensions___c;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Diagnostics {
class StackTrace;
}
namespace System::Reflection {
class MethodBase;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Internal {
class DiagnosticsExtensions;
}
namespace Cysharp::Threading::Tasks::Internal {
class DiagnosticsExtensions___c;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Internal::DiagnosticsExtensions*);
MARK_REF_T(::Cysharp::Threading::Tasks::Internal::DiagnosticsExtensions___c*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Internal::DiagnosticsExtensions*, "Cysharp.Threading.Tasks.Internal", "DiagnosticsExtensions");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Internal::DiagnosticsExtensions___c*, "Cysharp.Threading.Tasks.Internal", "DiagnosticsExtensions/<>c");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Internal {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Internal.DiagnosticsExtensions/<>c
class CORDL_TYPE DiagnosticsExtensions___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::Internal::DiagnosticsExtensions___c*  __9;

/// @brief Field <>9__3_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__3_0, put=setStaticF___9__3_0)) ::System::Func_2<::System::Reflection::ParameterInfo*,::StringW>*  __9__3_0;

/// @brief Field <>9__6_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__6_0, put=setStaticF___9__6_0)) ::System::Func_2<::System::Type*,::StringW>*  __9__6_0;

/// @brief Field <>9__6_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__6_1, put=setStaticF___9__6_1)) ::System::Func_2<::System::Type*,::StringW>*  __9__6_1;

static inline ::Cysharp::Threading::Tasks::Internal::DiagnosticsExtensions___c* New_ctor() ;

/// @brief Method <BeautifyType>b__6_0, addr 0x181e81e80, size 0x10, virtual false, abstract: false, final false
inline ::StringW _BeautifyType_b__6_0(::System::Type*  x) ;

/// @brief Method <BeautifyType>b__6_1, addr 0x181e81e80, size 0x10, virtual false, abstract: false, final false
inline ::StringW _BeautifyType_b__6_1(::System::Type*  x) ;

/// @brief Method <CleanupAsyncStackTrace>b__3_0, addr 0x181e81e90, size 0x80, virtual false, abstract: false, final false
inline ::StringW _CleanupAsyncStackTrace_b__3_0(::System::Reflection::ParameterInfo*  p) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::Internal::DiagnosticsExtensions___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Reflection::ParameterInfo*,::StringW>* getStaticF___9__3_0() ;

static inline ::System::Func_2<::System::Type*,::StringW>* getStaticF___9__6_0() ;

static inline ::System::Func_2<::System::Type*,::StringW>* getStaticF___9__6_1() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::Internal::DiagnosticsExtensions___c*  value) ;

static inline void setStaticF___9__3_0(::System::Func_2<::System::Reflection::ParameterInfo*,::StringW>*  value) ;

static inline void setStaticF___9__6_0(::System::Func_2<::System::Type*,::StringW>*  value) ;

static inline void setStaticF___9__6_1(::System::Func_2<::System::Type*,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DiagnosticsExtensions___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DiagnosticsExtensions___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DiagnosticsExtensions___c(DiagnosticsExtensions___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DiagnosticsExtensions___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DiagnosticsExtensions___c(DiagnosticsExtensions___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14714};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Internal::DiagnosticsExtensions___c) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Internal
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Internal {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Internal.DiagnosticsExtensions
class CORDL_TYPE DiagnosticsExtensions : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::Internal::DiagnosticsExtensions___c;

/// @brief Field builtInTypeNames, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_builtInTypeNames, put=setStaticF_builtInTypeNames)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::StringW>*  builtInTypeNames;

/// @brief Field displayFilenames, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_displayFilenames, put=setStaticF_displayFilenames)) bool  displayFilenames;

/// @brief Field typeBeautifyRegex, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_typeBeautifyRegex, put=setStaticF_typeBeautifyRegex)) ::System::Text::RegularExpressions::Regex*  typeBeautifyRegex;

/// @brief Method AppendHyperLink, addr 0x181e7d2a0, size 0x200, virtual false, abstract: false, final false
static inline ::StringW AppendHyperLink(::StringW  path, ::StringW  line) ;

/// @brief Method BeautifyType, addr 0x181e7d4a0, size 0x4c0, virtual false, abstract: false, final false
static inline ::StringW BeautifyType(::System::Type*  t, bool  shortName) ;

/// @brief Method CleanupAsyncStackTrace, addr 0x181e7d960, size 0x7a0, virtual false, abstract: false, final false
static inline ::StringW CleanupAsyncStackTrace(::System::Diagnostics::StackTrace*  stackTrace) ;

/// @brief Method IgnoreLine, addr 0x181e7e100, size 0x100, virtual false, abstract: false, final false
static inline bool IgnoreLine(::System::Reflection::MethodBase*  methodInfo) ;

/// @brief Method IsAsync, addr 0x181e7e200, size 0x60, virtual false, abstract: false, final false
static inline bool IsAsync(::System::Reflection::MethodBase*  methodInfo) ;

/// @brief Method TryResolveStateMachineMethod, addr 0x181e7e260, size 0x2a0, virtual false, abstract: false, final false
static inline bool TryResolveStateMachineMethod(::by_ref<::System::Reflection::MethodBase*>  method, ::by_ref<::System::Type*>  declaringType) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::StringW>* getStaticF_builtInTypeNames() ;

static inline bool getStaticF_displayFilenames() ;

static inline ::System::Text::RegularExpressions::Regex* getStaticF_typeBeautifyRegex() ;

static inline void setStaticF_builtInTypeNames(::System::Collections::Generic::Dictionary_2<::System::Type*,::StringW>*  value) ;

static inline void setStaticF_displayFilenames(bool  value) ;

static inline void setStaticF_typeBeautifyRegex(::System::Text::RegularExpressions::Regex*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DiagnosticsExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DiagnosticsExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DiagnosticsExtensions(DiagnosticsExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DiagnosticsExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DiagnosticsExtensions(DiagnosticsExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14715};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Internal::DiagnosticsExtensions) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Internal
