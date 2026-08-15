#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalizedException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ErrorUtils_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LocalizedException)
namespace GlobalNamespace {
struct ErrorUtils_ErrorType;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalizedException;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LocalizedException*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocalizedException*, "", "LocalizedException");
// Dependencies ErrorUtils::ErrorType, System.Exception
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalizedException
class CORDL_TYPE LocalizedException : public ::System::Exception {
public:
// Declarations
/// @brief Field ErrorsTypes, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ErrorsTypes, put=__cordl_internal_set_ErrorsTypes)) ::GlobalNamespace::ErrorUtils_ErrorType  ErrorsTypes;

static inline ::GlobalNamespace::LocalizedException* New_ctor(::StringW  message, ::GlobalNamespace::ErrorUtils_ErrorType  error) ;

constexpr ::GlobalNamespace::ErrorUtils_ErrorType const& __cordl_internal_get_ErrorsTypes() const;

constexpr ::GlobalNamespace::ErrorUtils_ErrorType& __cordl_internal_get_ErrorsTypes() ;

constexpr void __cordl_internal_set_ErrorsTypes(::GlobalNamespace::ErrorUtils_ErrorType  value) ;

/// @brief Method .ctor, addr 0x181ac6d30, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::GlobalNamespace::ErrorUtils_ErrorType  error) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedException(LocalizedException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedException(LocalizedException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21039};

/// @brief Field ErrorsTypes, offset: 0x8c, size: 0x4, def value: None
 ::GlobalNamespace::ErrorUtils_ErrorType  ___ErrorsTypes;

/// @brief Size padding 0x98 - 0x90 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalizedException, ___ErrorsTypes) == 0x8c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LocalizedException) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
