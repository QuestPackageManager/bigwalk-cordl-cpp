#pragma once
// IWYU pragma private; include "Rewired/UnknownControllerHat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnknownControllerHat)
namespace Rewired {
class UnknownControllerHat_HatButtons;
}
// Forward declare root types
namespace Rewired {
class UnknownControllerHat;
}
namespace Rewired {
class UnknownControllerHat_HatButtons;
}
// Write type traits
MARK_REF_T(::Rewired::UnknownControllerHat*);
MARK_REF_T(::Rewired::UnknownControllerHat_HatButtons*);
DEFINE_IL2CPP_CLASS(::Rewired::UnknownControllerHat*, "Rewired", "UnknownControllerHat");
DEFINE_IL2CPP_CLASS(::Rewired::UnknownControllerHat_HatButtons*, "Rewired", "UnknownControllerHat/HatButtons");
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.UnknownControllerHat/HatButtons
class CORDL_TYPE UnknownControllerHat_HatButtons : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Item)) int32_t  Item[];

/// @brief Field wzaZTVpRyfejMleYZxSVPFsyvDIn, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_wzaZTVpRyfejMleYZxSVPFsyvDIn, put=__cordl_internal_set_wzaZTVpRyfejMleYZxSVPFsyvDIn)) ::ArrayW<int32_t>  wzaZTVpRyfejMleYZxSVPFsyvDIn;

/// @brief Method Contains, addr 0x1818432e0, size 0x50, virtual false, abstract: false, final false
inline bool Contains(int32_t  button) ;

/// @brief Method GetNeighbors, addr 0x181843330, size 0xc0, virtual false, abstract: false, final false
inline void GetNeighbors(int32_t  button, ::by_ref<int32_t>  neighbor1, ::by_ref<int32_t>  neighbor2) ;

/// @brief Method IndexOf, addr 0x1818433f0, size 0x50, virtual false, abstract: false, final false
inline int32_t IndexOf(int32_t  button) ;

/// @brief Method IsCardinal, addr 0x181843440, size 0x60, virtual false, abstract: false, final false
inline bool IsCardinal(int32_t  button) ;

/// @brief Method IsCorner, addr 0x1818434a0, size 0x60, virtual false, abstract: false, final false
inline bool IsCorner(int32_t  button) ;

static inline ::Rewired::UnknownControllerHat_HatButtons* New_ctor(::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace) ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_wzaZTVpRyfejMleYZxSVPFsyvDIn() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_wzaZTVpRyfejMleYZxSVPFsyvDIn() ;

constexpr void __cordl_internal_set_wzaZTVpRyfejMleYZxSVPFsyvDIn(::ArrayW<int32_t>  value) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_Item, addr 0x181843500, size 0x20, virtual false, abstract: false, final false
inline int32_t get_Item(int32_t  index) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnknownControllerHat_HatButtons() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnknownControllerHat_HatButtons", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnknownControllerHat_HatButtons(UnknownControllerHat_HatButtons && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnknownControllerHat_HatButtons", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnknownControllerHat_HatButtons(UnknownControllerHat_HatButtons const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1773};

/// @brief Field wzaZTVpRyfejMleYZxSVPFsyvDIn, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___wzaZTVpRyfejMleYZxSVPFsyvDIn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::UnknownControllerHat_HatButtons, ___wzaZTVpRyfejMleYZxSVPFsyvDIn) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Rewired::UnknownControllerHat_HatButtons) == 0x18, "Size mismatch!");

} // namespace end def Rewired
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.UnknownControllerHat
class CORDL_TYPE UnknownControllerHat : public ::System::Object {
public:
// Declarations
using HatButtons = ::Rewired::UnknownControllerHat_HatButtons;

/// @brief Field yOjDFcHzQBGZfGWqGJFBjiIPmADdb, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_yOjDFcHzQBGZfGWqGJFBjiIPmADdb, put=__cordl_internal_set_yOjDFcHzQBGZfGWqGJFBjiIPmADdb)) ::Rewired::UnknownControllerHat_HatButtons*  yOjDFcHzQBGZfGWqGJFBjiIPmADdb;

/// @brief Method ContainsButtonIndex, addr 0x181847af0, size 0x60, virtual false, abstract: false, final false
inline bool ContainsButtonIndex(int32_t  index) ;

/// @brief Method GetButtons, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::UnknownControllerHat_HatButtons* GetButtons() ;

/// @brief Method IsButtonIndexCardinal, addr 0x181847b50, size 0x90, virtual false, abstract: false, final false
inline bool IsButtonIndexCardinal(int32_t  index) ;

static inline ::Rewired::UnknownControllerHat* New_ctor(::Rewired::UnknownControllerHat_HatButtons*  _cordl_fixed_empty_name_whitespace) ;

constexpr ::Rewired::UnknownControllerHat_HatButtons* const& __cordl_internal_get_yOjDFcHzQBGZfGWqGJFBjiIPmADdb() const;

constexpr ::Rewired::UnknownControllerHat_HatButtons*& __cordl_internal_get_yOjDFcHzQBGZfGWqGJFBjiIPmADdb() ;

constexpr void __cordl_internal_set_yOjDFcHzQBGZfGWqGJFBjiIPmADdb(::Rewired::UnknownControllerHat_HatButtons*  value) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Rewired::UnknownControllerHat_HatButtons*  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnknownControllerHat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnknownControllerHat", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnknownControllerHat(UnknownControllerHat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnknownControllerHat", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnknownControllerHat(UnknownControllerHat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1774};

/// @brief Field yOjDFcHzQBGZfGWqGJFBjiIPmADdb, offset: 0x10, size: 0x8, def value: None
 ::Rewired::UnknownControllerHat_HatButtons*  ___yOjDFcHzQBGZfGWqGJFBjiIPmADdb;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::UnknownControllerHat, ___yOjDFcHzQBGZfGWqGJFBjiIPmADdb) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Rewired::UnknownControllerHat) == 0x18, "Size mismatch!");

} // namespace end def Rewired
