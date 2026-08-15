#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/VerifyIdTokenOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Connect/zzzz__IdToken_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(VerifyIdTokenOptions)
namespace Epic::OnlineServices::Connect {
struct IdToken;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Connect {
struct VerifyIdTokenOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Connect::VerifyIdTokenOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Connect::VerifyIdTokenOptions, "Epic.OnlineServices.Connect", "VerifyIdTokenOptions");
// Dependencies Epic.OnlineServices.Connect.IdToken, System.Nullable`1<T>
namespace Epic::OnlineServices::Connect {
// Is value type: true
// CS Name: Epic.OnlineServices.Connect.VerifyIdTokenOptions
struct CORDL_TYPE VerifyIdTokenOptions {
public:
// Declarations
 __declspec(property(get=get_IdToken, put=set_IdToken)) ::System::Nullable_1<::Epic::OnlineServices::Connect::IdToken>  IdToken;

/// @brief Method get_IdToken, addr 0x180503ad0, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::Connect::IdToken> get_IdToken() ;

/// @brief Method set_IdToken, addr 0x18051ea80, size 0x20, virtual false, abstract: false, final false
inline void set_IdToken(::System::Nullable_1<::Epic::OnlineServices::Connect::IdToken>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr VerifyIdTokenOptions() ;

// Ctor Parameters [CppParam { name: "_IdToken_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Connect::IdToken>", modifiers: "", def_value: None }]
constexpr VerifyIdTokenOptions(::System::Nullable_1<::Epic::OnlineServices::Connect::IdToken>  _IdToken_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9221};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <IdToken>k__BackingField, offset: 0x0, size: 0x18, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::Connect::IdToken>  _IdToken_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Connect::VerifyIdTokenOptions, _IdToken_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Connect::VerifyIdTokenOptions) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Connect
