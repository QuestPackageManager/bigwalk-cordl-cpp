#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/PaintFalloffArea.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "JBooth/MicroVerseCore/zzzz__Stamp_def.hpp"
CORDL_MODULE_EXPORT(PaintFalloffArea)
namespace JBooth::MicroVerseCore {
class FalloffFilter_PaintMask;
}
namespace JBooth::MicroVerseCore {
class IModifier;
}
namespace UnityEngine {
struct Bounds;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class PaintFalloffArea;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::PaintFalloffArea*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::PaintFalloffArea*, "JBooth.MicroVerseCore", "PaintFalloffArea");
// Dependencies JBooth.MicroVerseCore.Stamp
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.PaintFalloffArea
class CORDL_TYPE PaintFalloffArea : public ::JBooth::MicroVerseCore::Stamp {
public:
// Declarations
/// @brief Field clampOutsideOfBounds, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_clampOutsideOfBounds, put=__cordl_internal_set_clampOutsideOfBounds)) bool  clampOutsideOfBounds;

/// @brief Field paintMask, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_paintMask, put=__cordl_internal_set_paintMask)) ::JBooth::MicroVerseCore::FalloffFilter_PaintMask*  paintMask;

/// @brief Convert operator to "::JBooth::MicroVerseCore::IModifier"
constexpr operator  ::JBooth::MicroVerseCore::IModifier*() noexcept;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetBounds, addr 0x181446c40, size 0x30, virtual true, abstract: false, final false
inline ::UnityEngine::Bounds GetBounds() ;

/// @brief Method Initialize, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Initialize() ;

static inline ::JBooth::MicroVerseCore::PaintFalloffArea* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x181446c70, size 0xf0, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

constexpr bool const& __cordl_internal_get_clampOutsideOfBounds() const;

constexpr bool& __cordl_internal_get_clampOutsideOfBounds() ;

constexpr ::JBooth::MicroVerseCore::FalloffFilter_PaintMask* const& __cordl_internal_get_paintMask() const;

constexpr ::JBooth::MicroVerseCore::FalloffFilter_PaintMask*& __cordl_internal_get_paintMask() ;

constexpr void __cordl_internal_set_clampOutsideOfBounds(bool  value) ;

constexpr void __cordl_internal_set_paintMask(::JBooth::MicroVerseCore::FalloffFilter_PaintMask*  value) ;

/// @brief Method .ctor, addr 0x181446d60, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::JBooth::MicroVerseCore::IModifier"
constexpr ::JBooth::MicroVerseCore::IModifier* i___JBooth__MicroVerseCore__IModifier() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PaintFalloffArea() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PaintFalloffArea", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PaintFalloffArea(PaintFalloffArea && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PaintFalloffArea", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PaintFalloffArea(PaintFalloffArea const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18030};

/// @brief Field paintMask, offset: 0x30, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::FalloffFilter_PaintMask*  ___paintMask;

/// @brief Field clampOutsideOfBounds, offset: 0x38, size: 0x1, def value: None
 bool  ___clampOutsideOfBounds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::PaintFalloffArea, ___paintMask) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::PaintFalloffArea, ___clampOutsideOfBounds) == 0x38, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::PaintFalloffArea) == 0x40, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
