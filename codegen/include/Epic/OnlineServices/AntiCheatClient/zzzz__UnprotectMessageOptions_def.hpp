#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/UnprotectMessageOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArraySegment_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnprotectMessageOptions)
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatClient {
struct UnprotectMessageOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatClient::UnprotectMessageOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatClient::UnprotectMessageOptions, "Epic.OnlineServices.AntiCheatClient", "UnprotectMessageOptions");
// Dependencies System.ArraySegment`1<T>
namespace Epic::OnlineServices::AntiCheatClient {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatClient.UnprotectMessageOptions
struct CORDL_TYPE UnprotectMessageOptions {
public:
// Declarations
 __declspec(property(get=get_Data, put=set_Data)) ::System::ArraySegment_1<uint8_t>  Data;

 __declspec(property(get=get_OutBufferSizeBytes, put=set_OutBufferSizeBytes)) uint32_t  OutBufferSizeBytes;

/// @brief Method get_Data, addr 0x1804f6880, size 0x10, virtual false, abstract: false, final false
inline ::System::ArraySegment_1<uint8_t> get_Data() ;

/// @brief Method get_OutBufferSizeBytes, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_OutBufferSizeBytes() ;

/// @brief Method set_Data, addr 0x180347400, size 0xc0, virtual false, abstract: false, final false
inline void set_Data(::System::ArraySegment_1<uint8_t>  value) ;

/// @brief Method set_OutBufferSizeBytes, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_OutBufferSizeBytes(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr UnprotectMessageOptions() ;

// Ctor Parameters [CppParam { name: "_Data_k__BackingField", ty: "::System::ArraySegment_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "_OutBufferSizeBytes_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr UnprotectMessageOptions(::System::ArraySegment_1<uint8_t>  _Data_k__BackingField, uint32_t  _OutBufferSizeBytes_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9448};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <Data>k__BackingField, offset: 0x0, size: 0x10, def value: None
 ::System::ArraySegment_1<uint8_t>  _Data_k__BackingField;

/// @brief Field <OutBufferSizeBytes>k__BackingField, offset: 0x10, size: 0x4, def value: None
 uint32_t  _OutBufferSizeBytes_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::UnprotectMessageOptions, _Data_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::UnprotectMessageOptions, _OutBufferSizeBytes_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatClient::UnprotectMessageOptions) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatClient
