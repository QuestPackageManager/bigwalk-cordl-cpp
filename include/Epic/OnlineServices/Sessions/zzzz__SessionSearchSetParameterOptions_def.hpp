#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionSearchSetParameterOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Sessions/zzzz__AttributeData_def.hpp"
#include "Epic/OnlineServices/zzzz__ComparisonOp_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SessionSearchSetParameterOptions)
namespace Epic::OnlineServices::Sessions {
struct AttributeData;
}
namespace Epic::OnlineServices {
struct ComparisonOp;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
struct SessionSearchSetParameterOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions, "Epic.OnlineServices.Sessions", "SessionSearchSetParameterOptions");
// Dependencies Epic.OnlineServices.ComparisonOp, Epic.OnlineServices.Sessions.AttributeData, System.Nullable`1<T>
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.SessionSearchSetParameterOptions
struct CORDL_TYPE SessionSearchSetParameterOptions {
public:
// Declarations
 __declspec(property(get=get_ComparisonOp, put=set_ComparisonOp)) ::Epic::OnlineServices::ComparisonOp  ComparisonOp;

 __declspec(property(get=get_Parameter, put=set_Parameter)) ::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData>  Parameter;

/// @brief Method get_ComparisonOp, addr 0x1803d4dd0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ComparisonOp get_ComparisonOp() ;

/// @brief Method get_Parameter, addr 0x1804e6720, size 0x30, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData> get_Parameter() ;

/// @brief Method set_ComparisonOp, addr 0x1803d4ea0, size 0x10, virtual false, abstract: false, final false
inline void set_ComparisonOp(::Epic::OnlineServices::ComparisonOp  value) ;

/// @brief Method set_Parameter, addr 0x1804e6750, size 0x40, virtual false, abstract: false, final false
inline void set_Parameter(::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SessionSearchSetParameterOptions() ;

// Ctor Parameters [CppParam { name: "_Parameter_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData>", modifiers: "", def_value: None }, CppParam { name: "_ComparisonOp_k__BackingField", ty: "::Epic::OnlineServices::ComparisonOp", modifiers: "", def_value: None }]
constexpr SessionSearchSetParameterOptions(::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData>  _Parameter_k__BackingField, ::Epic::OnlineServices::ComparisonOp  _ComparisonOp_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7851};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <Parameter>k__BackingField, offset: 0x0, size: 0x48, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData>  _Parameter_k__BackingField;

/// @brief Field <ComparisonOp>k__BackingField, offset: 0x48, size: 0x4, def value: None
 ::Epic::OnlineServices::ComparisonOp  _ComparisonOp_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions, _Parameter_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions, _ComparisonOp_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions) == 0x50, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
