#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/QuatUtil.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(QuatUtil)
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct quaternion;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class QuatUtil;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::QuatUtil*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::QuatUtil*, "JBooth.MicroVerseCore", "QuatUtil");
// Dependencies System.Object
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.QuatUtil
class CORDL_TYPE QuatUtil : public ::System::Object {
public:
// Declarations
/// @brief Method ExtractForward, addr 0x18141e590, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 ExtractForward(::Unity::Mathematics::quaternion  q) ;

/// @brief Method ExtractLeft, addr 0x18141e600, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 ExtractLeft(::Unity::Mathematics::quaternion  q) ;

/// @brief Method ExtractUp, addr 0x18141e680, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 ExtractUp(::Unity::Mathematics::quaternion  q) ;

static inline ::JBooth::MicroVerseCore::QuatUtil* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QuatUtil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QuatUtil", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
QuatUtil(QuatUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QuatUtil", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
QuatUtil(QuatUtil const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17951};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::JBooth::MicroVerseCore::QuatUtil) == 0x10, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
