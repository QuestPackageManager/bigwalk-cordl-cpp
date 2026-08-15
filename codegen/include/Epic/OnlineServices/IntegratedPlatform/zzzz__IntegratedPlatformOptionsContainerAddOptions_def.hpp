#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IntegratedPlatform/IntegratedPlatformOptionsContainerAddOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__Options_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(IntegratedPlatformOptionsContainerAddOptions)
namespace Epic::OnlineServices::IntegratedPlatform {
struct Options;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::IntegratedPlatform {
struct IntegratedPlatformOptionsContainerAddOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptions, "Epic.OnlineServices.IntegratedPlatform", "IntegratedPlatformOptionsContainerAddOptions");
// Dependencies Epic.OnlineServices.IntegratedPlatform.Options, System.Nullable`1<T>
namespace Epic::OnlineServices::IntegratedPlatform {
// Is value type: true
// CS Name: Epic.OnlineServices.IntegratedPlatform.IntegratedPlatformOptionsContainerAddOptions
struct CORDL_TYPE IntegratedPlatformOptionsContainerAddOptions {
public:
// Declarations
 __declspec(property(get=get_Options, put=set_Options)) ::System::Nullable_1<::Epic::OnlineServices::IntegratedPlatform::Options>  Options;

/// @brief Method get_Options, addr 0x1805115a0, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::IntegratedPlatform::Options> get_Options() ;

/// @brief Method set_Options, addr 0x1805115c0, size 0x20, virtual false, abstract: false, final false
inline void set_Options(::System::Nullable_1<::Epic::OnlineServices::IntegratedPlatform::Options>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr IntegratedPlatformOptionsContainerAddOptions() ;

// Ctor Parameters [CppParam { name: "_Options_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::IntegratedPlatform::Options>", modifiers: "", def_value: None }]
constexpr IntegratedPlatformOptionsContainerAddOptions(::System::Nullable_1<::Epic::OnlineServices::IntegratedPlatform::Options>  _Options_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8808};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <Options>k__BackingField, offset: 0x0, size: 0x20, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::IntegratedPlatform::Options>  _Options_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptions, _Options_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptions) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::IntegratedPlatform
