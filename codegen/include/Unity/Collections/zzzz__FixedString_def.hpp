#pragma once
// IWYU pragma private; include "Unity/Collections/FixedString.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FixedString)
namespace Unity::Collections {
struct FixedString128Bytes;
}
namespace Unity::Collections {
struct FixedString512Bytes;
}
// Forward declare root types
namespace Unity::Collections {
class FixedString;
}
// Write type traits
MARK_REF_T(::Unity::Collections::FixedString*);
DEFINE_IL2CPP_CLASS(::Unity::Collections::FixedString*, "Unity.Collections", "FixedString");
// Dependencies System.Object
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.FixedString
class CORDL_TYPE FixedString : public ::System::Object {
public:
// Declarations
/// @brief Method Format, addr 0x181eb9a80, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0) ;

/// @brief Method Format, addr 0x181eb8b80, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, ::StringW  arg1) ;

/// @brief Method Format, addr 0x181eb8a80, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, ::StringW  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, ::StringW  arg1, T1  arg2) ;

/// @brief Method Format, addr 0x181eba8f0, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, ::StringW  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x181eb6c20, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, ::StringW  arg1, int32_t  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, T1  arg1) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, T1  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, T1  arg1, T2  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, T1  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, T1  arg1, int32_t  arg2) ;

/// @brief Method Format, addr 0x181ebb3e0, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, float_t  arg1) ;

/// @brief Method Format, addr 0x181ebbd30, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, float_t  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, float_t  arg1, T1  arg2) ;

/// @brief Method Format, addr 0x181eb9060, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, float_t  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x181eb4ab0, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, float_t  arg1, int32_t  arg2) ;

/// @brief Method Format, addr 0x181eb9530, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, int32_t  arg1) ;

/// @brief Method Format, addr 0x181eba3a0, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, int32_t  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, int32_t  arg1, T1  arg2) ;

/// @brief Method Format, addr 0x181eb3b90, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, int32_t  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x181eba4a0, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, ::StringW  arg0, int32_t  arg1, int32_t  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, ::StringW  arg1) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, ::StringW  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, ::StringW  arg1, T2  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, ::StringW  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, ::StringW  arg1, int32_t  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, T2  arg1) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, T2  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, T2  arg1, T3  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, T2  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, T2  arg1, int32_t  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, float_t  arg1) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, float_t  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, float_t  arg1, T2  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, float_t  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, float_t  arg1, int32_t  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, int32_t  arg1) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, int32_t  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, int32_t  arg1, T2  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, int32_t  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, T1  arg0, int32_t  arg1, int32_t  arg2) ;

/// @brief Method Format, addr 0x181eb7b90, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0) ;

/// @brief Method Format, addr 0x181ebad00, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, ::StringW  arg1) ;

/// @brief Method Format, addr 0x181eb7070, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, ::StringW  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, ::StringW  arg1, T1  arg2) ;

/// @brief Method Format, addr 0x181eb3c90, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, ::StringW  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x181ebbb00, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, ::StringW  arg1, int32_t  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, T1  arg1) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, T1  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, T1  arg1, T2  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, T1  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, T1  arg1, int32_t  arg2) ;

/// @brief Method Format, addr 0x181eb8c40, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, float_t  arg1) ;

/// @brief Method Format, addr 0x181eb6040, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, float_t  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, float_t  arg1, T1  arg2) ;

/// @brief Method Format, addr 0x181eb5b90, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, float_t  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x181eba6f0, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, float_t  arg1, int32_t  arg2) ;

/// @brief Method Format, addr 0x181ebac40, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, int32_t  arg1) ;

/// @brief Method Format, addr 0x181eb5950, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, int32_t  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, int32_t  arg1, T1  arg2) ;

/// @brief Method Format, addr 0x181eb8d00, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, int32_t  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x181eb49c0, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, float_t  arg0, int32_t  arg1, int32_t  arg2) ;

/// @brief Method Format, addr 0x181eb7ff0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0) ;

/// @brief Method Format, addr 0x181eb3490, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, ::StringW  arg1) ;

/// @brief Method Format, addr 0x181eb67a0, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, ::StringW  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, ::StringW  arg1, T1  arg2) ;

/// @brief Method Format, addr 0x181ebab40, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, ::StringW  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x181eb8f60, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, ::StringW  arg1, int32_t  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, T1  arg1) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, T1  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, T1  arg1, T2  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, T1  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, T1  arg1, int32_t  arg2) ;

/// @brief Method Format, addr 0x181eb6e70, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, float_t  arg1) ;

/// @brief Method Format, addr 0x181eba7f0, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, float_t  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, float_t  arg1, T1  arg2) ;

/// @brief Method Format, addr 0x181ebb040, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, float_t  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x181eb4170, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, float_t  arg1, int32_t  arg2) ;

/// @brief Method Format, addr 0x181eb99c0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, int32_t  arg1) ;

/// @brief Method Format, addr 0x181eb48c0, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, int32_t  arg1, ::StringW  arg2) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, int32_t  arg1, T1  arg2) ;

/// @brief Method Format, addr 0x181eb6b20, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, int32_t  arg1, float_t  arg2) ;

/// @brief Method Format, addr 0x181eb4f90, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes  formatString, int32_t  arg0, int32_t  arg1, int32_t  arg2) ;

/// @brief Method Format, addr 0x181eb93f0, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, ::StringW  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x181eb9730, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x181eb9ff0, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, ::StringW  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, T1  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, T1  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, T1  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, T1  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x181eb6290, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, float_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x181eb3ed0, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x181eb9170, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x181eb37d0, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, int32_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x181eb7160, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x181eb4630, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, ::StringW  arg1, int32_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, T1  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, T1  arg1, ::StringW  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, T1  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, T1  arg1, ::StringW  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, T1  arg1, T2  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, T1  arg1, T2  arg2, T3  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, T1  arg1, T2  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, T1  arg1, T2  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, T1  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, T1  arg1, float_t  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, T1  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, T1  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, T1  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, T1  arg1, int32_t  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, T1  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, T1  arg1, int32_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x181eb9eb0, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, ::StringW  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x181eb9870, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x181ebb880, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, ::StringW  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, T1  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, T1  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, T1  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, T1  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x181eb5580, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, float_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x181eb8440, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x181eb81a0, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x181eb7c10, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, int32_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x181eba9f0, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x181eb5dc0, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, float_t  arg1, int32_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x181eb7a50, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, ::StringW  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x181eb7910, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x181eb5810, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, ::StringW  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, T1  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, T1  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, T1  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, T1  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x181ebb150, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, float_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x181eb3a50, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x181ebb600, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x181eb5300, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, int32_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x181eb8800, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x181eba270, size 0x130, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, ::StringW  arg0, int32_t  arg1, int32_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, ::StringW  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, ::StringW  arg1, ::StringW  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, ::StringW  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, ::StringW  arg1, ::StringW  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, ::StringW  arg1, T2  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, ::StringW  arg1, T2  arg2, T3  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, ::StringW  arg1, T2  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, ::StringW  arg1, T2  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, ::StringW  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, ::StringW  arg1, float_t  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, ::StringW  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, ::StringW  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, ::StringW  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, ::StringW  arg1, int32_t  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, ::StringW  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, ::StringW  arg1, int32_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, T2  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, T2  arg1, ::StringW  arg2, T3  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, T2  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, T2  arg1, ::StringW  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, T2  arg1, T3  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, T2  arg1, T3  arg2, T4  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, T2  arg1, T3  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, T2  arg1, T3  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, T2  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, T2  arg1, float_t  arg2, T3  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, T2  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, T2  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, T2  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, T2  arg1, int32_t  arg2, T3  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, T2  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, T2  arg1, int32_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, float_t  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, float_t  arg1, ::StringW  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, float_t  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, float_t  arg1, ::StringW  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, float_t  arg1, T2  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, float_t  arg1, T2  arg2, T3  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, float_t  arg1, T2  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, float_t  arg1, T2  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, float_t  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, float_t  arg1, float_t  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, float_t  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, float_t  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, float_t  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, float_t  arg1, int32_t  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, float_t  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, float_t  arg1, int32_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, int32_t  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, int32_t  arg1, ::StringW  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, int32_t  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, int32_t  arg1, ::StringW  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, int32_t  arg1, T2  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, int32_t  arg1, T2  arg2, T3  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, int32_t  arg1, T2  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, int32_t  arg1, T2  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, int32_t  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, int32_t  arg1, float_t  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, int32_t  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, int32_t  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, int32_t  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, int32_t  arg1, int32_t  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, int32_t  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, T1  arg0, int32_t  arg1, int32_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x181eb63d0, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, ::StringW  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x181eb77c0, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x181eb6f30, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, ::StringW  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, T1  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, T1  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, T1  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, T1  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x181eb7d50, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, float_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x181eb4cf0, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x181eb5a40, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x181eb3d90, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, int32_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x181eb4020, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x181eb4270, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, ::StringW  arg1, int32_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, T1  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, T1  arg1, ::StringW  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, T1  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, T1  arg1, ::StringW  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, T1  arg1, T2  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, T1  arg1, T2  arg2, T3  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, T1  arg1, T2  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, T1  arg1, T2  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, T1  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, T1  arg1, float_t  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, T1  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, T1  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, T1  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, T1  arg1, int32_t  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, T1  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, T1  arg1, int32_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x181ebb4b0, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, ::StringW  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x181eb6510, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x181eb4770, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, ::StringW  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, T1  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, T1  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, T1  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, T1  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x181ebb290, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, float_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x181eb8e00, size 0x160, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x181eb5080, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x181eb82f0, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, int32_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x181eb6140, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x181eb7ea0, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, float_t  arg1, int32_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x181eb95f0, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, ::StringW  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x181eba5a0, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x181eb56d0, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, ::StringW  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, T1  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, T1  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, T1  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, T1  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x181eb72a0, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, float_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x181eb7670, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x181ebbbf0, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x181eb8590, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, int32_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x181ebadc0, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x181eb5440, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, float_t  arg0, int32_t  arg1, int32_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x181eb43b0, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, ::StringW  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x181eb68a0, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x181eb8940, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, ::StringW  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, T1  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, T1  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, T1  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, T1  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x181eba130, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, float_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x181ebaf00, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x181eb44f0, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x181eb9d70, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, int32_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x181eb73f0, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x181eb5c90, size 0x130, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, ::StringW  arg1, int32_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, T1  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, T1  arg1, ::StringW  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, T1  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, T1  arg1, ::StringW  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, T1  arg1, T2  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, T1  arg1, T2  arg2, T3  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, T1  arg1, T2  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, T1  arg1, T2  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, T1  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, T1  arg1, float_t  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, T1  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, T1  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, T1  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, T1  arg1, int32_t  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, T1  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, T1  arg1, int32_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x181ebb9c0, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, ::StringW  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x181eb6d20, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x181ebb740, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, ::StringW  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, T1  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, T1  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, T1  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, T1  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x181eb3550, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, float_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x181eb4e40, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x181eb9c30, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x181eb4bb0, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, int32_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x181eb8060, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x181eb3910, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, float_t  arg1, int32_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x181eb7530, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, ::StringW  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x181eb6660, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, ::StringW  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x181eb51d0, size 0x130, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, ::StringW  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, T1  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, T1  arg2, T2  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, T1  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, T1  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x181eb5f00, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, float_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, float_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x181eb92b0, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, float_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x181eb9af0, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, float_t  arg2, int32_t  arg3) ;

/// @brief Method Format, addr 0x181eb86d0, size 0x130, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, int32_t  arg2, ::StringW  arg3) ;

/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, int32_t  arg2, T1  arg3) ;

/// @brief Method Format, addr 0x181eb69e0, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, int32_t  arg2, float_t  arg3) ;

/// @brief Method Format, addr 0x181eb36a0, size 0x130, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes  formatString, int32_t  arg0, int32_t  arg1, int32_t  arg2, int32_t  arg3) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FixedString() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FixedString", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FixedString(FixedString && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FixedString", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FixedString(FixedString const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14897};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Collections::FixedString) == 0x10, "Size mismatch!");

} // namespace end def Unity::Collections
