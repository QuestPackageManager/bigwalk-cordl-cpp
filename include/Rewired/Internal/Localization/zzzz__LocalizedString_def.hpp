#pragma once
// IWYU pragma private; include "Rewired/Internal/Localization/LocalizedString.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalizedString)
namespace Rewired::Interfaces {
class ILocalizedStringProvider;
}
// Forward declare root types
namespace Rewired::Internal::Localization {
class LocalizedString;
}
// Write type traits
MARK_REF_T(::Rewired::Internal::Localization::LocalizedString*);
DEFINE_IL2CPP_CLASS(::Rewired::Internal::Localization::LocalizedString*, "Rewired.Internal.Localization", "LocalizedString");
// Dependencies System.Object
namespace Rewired::Internal::Localization {
// Is value type: false
// CS Name: Rewired.Internal.Localization.LocalizedString
class CORDL_TYPE LocalizedString : public ::System::Object {
public:
// Declarations
/// @brief Field HZBZgaXePvlFxKiAtayOSCUPbwZp, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_HZBZgaXePvlFxKiAtayOSCUPbwZp, put=__cordl_internal_set_HZBZgaXePvlFxKiAtayOSCUPbwZp)) uint32_t  HZBZgaXePvlFxKiAtayOSCUPbwZp;

/// @brief Field MyOvGlpbihlbCckpnwRYLGmdYJEn, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_MyOvGlpbihlbCckpnwRYLGmdYJEn, put=__cordl_internal_set_MyOvGlpbihlbCckpnwRYLGmdYJEn)) uint32_t  MyOvGlpbihlbCckpnwRYLGmdYJEn;

/// @brief Field RvNHDUonOYzrebBzdPlvWCKkmrSs, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_RvNHDUonOYzrebBzdPlvWCKkmrSs, put=__cordl_internal_set_RvNHDUonOYzrebBzdPlvWCKkmrSs)) bool  RvNHDUonOYzrebBzdPlvWCKkmrSs;

 __declspec(property(get=get_cachedValue, put=set_cachedValue)) ::StringW  cachedValue;

/// @brief Field gSUbjJzCjqUFSLCBIfRrDuRrZsEGA, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_gSUbjJzCjqUFSLCBIfRrDuRrZsEGA, put=__cordl_internal_set_gSUbjJzCjqUFSLCBIfRrDuRrZsEGA)) ::StringW  gSUbjJzCjqUFSLCBIfRrDuRrZsEGA;

 __declspec(property(get=get_hasCachedValue)) bool  hasCachedValue;

/// @brief Method Clear, addr 0x1818f3560, size 0x30, virtual false, abstract: false, final false
inline void Clear() ;

static inline ::Rewired::Internal::Localization::LocalizedString* New_ctor() ;

static inline ::Rewired::Internal::Localization::LocalizedString* New_ctor(::Rewired::Internal::Localization::LocalizedString*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method TryGetLocalizedValue, addr 0x1818f3590, size 0x230, virtual false, abstract: false, final false
inline bool TryGetLocalizedValue(::StringW  key, ::Rewired::Interfaces::ILocalizedStringProvider*  localizer, uint32_t  localizerVersion, uint32_t  userVersion, ::by_ref<bool>  versionChanged, ::by_ref<::StringW>  result) ;

constexpr uint32_t const& __cordl_internal_get_HZBZgaXePvlFxKiAtayOSCUPbwZp() const;

constexpr uint32_t& __cordl_internal_get_HZBZgaXePvlFxKiAtayOSCUPbwZp() ;

constexpr uint32_t const& __cordl_internal_get_MyOvGlpbihlbCckpnwRYLGmdYJEn() const;

constexpr uint32_t& __cordl_internal_get_MyOvGlpbihlbCckpnwRYLGmdYJEn() ;

constexpr bool const& __cordl_internal_get_RvNHDUonOYzrebBzdPlvWCKkmrSs() const;

constexpr bool& __cordl_internal_get_RvNHDUonOYzrebBzdPlvWCKkmrSs() ;

constexpr ::StringW const& __cordl_internal_get_gSUbjJzCjqUFSLCBIfRrDuRrZsEGA() const;

constexpr ::StringW& __cordl_internal_get_gSUbjJzCjqUFSLCBIfRrDuRrZsEGA() ;

constexpr void __cordl_internal_set_HZBZgaXePvlFxKiAtayOSCUPbwZp(uint32_t  value) ;

constexpr void __cordl_internal_set_MyOvGlpbihlbCckpnwRYLGmdYJEn(uint32_t  value) ;

constexpr void __cordl_internal_set_RvNHDUonOYzrebBzdPlvWCKkmrSs(bool  value) ;

constexpr void __cordl_internal_set_gSUbjJzCjqUFSLCBIfRrDuRrZsEGA(::StringW  value) ;

/// @brief Method .ctor, addr 0x1818f37c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1818f37d0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Internal::Localization::LocalizedString*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_cachedValue, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_cachedValue() ;

/// @brief Method get_hasCachedValue, addr 0x1803a7410, size 0x10, virtual false, abstract: false, final false
inline bool get_hasCachedValue() ;

/// @brief Method set_cachedValue, addr 0x1818f3820, size 0x20, virtual false, abstract: false, final false
inline void set_cachedValue(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedString() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedString", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedString(LocalizedString && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedString", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedString(LocalizedString const& ) = delete;

/// @brief Field INVALID_VERSION offset 0xffffffff size 0x4
static constexpr uint32_t  INVALID_VERSION{static_cast<uint32_t>(0x0u)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2832};

/// @brief Field MyOvGlpbihlbCckpnwRYLGmdYJEn, offset: 0x10, size: 0x4, def value: None
 uint32_t  ___MyOvGlpbihlbCckpnwRYLGmdYJEn;

/// @brief Field HZBZgaXePvlFxKiAtayOSCUPbwZp, offset: 0x14, size: 0x4, def value: None
 uint32_t  ___HZBZgaXePvlFxKiAtayOSCUPbwZp;

/// @brief Field gSUbjJzCjqUFSLCBIfRrDuRrZsEGA, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___gSUbjJzCjqUFSLCBIfRrDuRrZsEGA;

/// @brief Field RvNHDUonOYzrebBzdPlvWCKkmrSs, offset: 0x20, size: 0x1, def value: None
 bool  ___RvNHDUonOYzrebBzdPlvWCKkmrSs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Internal::Localization::LocalizedString, ___MyOvGlpbihlbCckpnwRYLGmdYJEn) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::Localization::LocalizedString, ___HZBZgaXePvlFxKiAtayOSCUPbwZp) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::Localization::LocalizedString, ___gSUbjJzCjqUFSLCBIfRrDuRrZsEGA) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::Localization::LocalizedString, ___RvNHDUonOYzrebBzdPlvWCKkmrSs) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rewired::Internal::Localization::LocalizedString) == 0x28, "Size mismatch!");

} // namespace end def Rewired::Internal::Localization
