#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/ReadHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReadHelper)
namespace Mirror::SimpleWeb {
class ReadHelper___c;
}
namespace System::IO {
class Stream;
}
namespace System {
class Exception;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Mirror::SimpleWeb {
class ReadHelper;
}
namespace Mirror::SimpleWeb {
class ReadHelper___c;
}
// Write type traits
MARK_REF_T(::Mirror::SimpleWeb::ReadHelper*);
MARK_REF_T(::Mirror::SimpleWeb::ReadHelper___c*);
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::ReadHelper*, "Mirror.SimpleWeb", "ReadHelper");
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::ReadHelper___c*, "Mirror.SimpleWeb", "ReadHelper/<>c");
// Dependencies System.Object
namespace Mirror::SimpleWeb {
// Is value type: false
// CS Name: Mirror.SimpleWeb.ReadHelper/<>c
class CORDL_TYPE ReadHelper___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Mirror::SimpleWeb::ReadHelper___c*  __9;

/// @brief Field <>9__0_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_0, put=setStaticF___9__0_0)) ::System::Func_2<::System::Exception*,bool>*  __9__0_0;

static inline ::Mirror::SimpleWeb::ReadHelper___c* New_ctor() ;

/// @brief Method <Read>b__0_0, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
inline bool _Read_b__0_0(::System::Exception*  e) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Mirror::SimpleWeb::ReadHelper___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Exception*,bool>* getStaticF___9__0_0() ;

static inline void setStaticF___9(::Mirror::SimpleWeb::ReadHelper___c*  value) ;

static inline void setStaticF___9__0_0(::System::Func_2<::System::Exception*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReadHelper___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReadHelper___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReadHelper___c(ReadHelper___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReadHelper___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReadHelper___c(ReadHelper___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20529};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::SimpleWeb::ReadHelper___c) == 0x10, "Size mismatch!");

} // namespace end def Mirror::SimpleWeb
// Dependencies System.Object
namespace Mirror::SimpleWeb {
// Is value type: false
// CS Name: Mirror.SimpleWeb.ReadHelper
class CORDL_TYPE ReadHelper : public ::System::Object {
public:
// Declarations
using __c = ::Mirror::SimpleWeb::ReadHelper___c;

/// @brief Method Read, addr 0x181ad1de0, size 0x210, virtual false, abstract: false, final false
static inline int32_t Read(::System::IO::Stream*  stream, ::ArrayW<uint8_t>  outBuffer, int32_t  outOffset, int32_t  length) ;

/// @brief Method SafeReadTillMatch, addr 0x181ad1ff0, size 0x120, virtual false, abstract: false, final false
static inline ::System::Nullable_1<int32_t> SafeReadTillMatch(::System::IO::Stream*  stream, ::ArrayW<uint8_t>  outBuffer, int32_t  outOffset, int32_t  maxLength, ::ArrayW<uint8_t>  endOfHeader) ;

/// @brief Method TryRead, addr 0x181ad2110, size 0x30, virtual false, abstract: false, final false
static inline bool TryRead(::System::IO::Stream*  stream, ::ArrayW<uint8_t>  outBuffer, int32_t  outOffset, int32_t  length) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReadHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReadHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReadHelper(ReadHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReadHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReadHelper(ReadHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20530};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::SimpleWeb::ReadHelper) == 0x10, "Size mismatch!");

} // namespace end def Mirror::SimpleWeb
