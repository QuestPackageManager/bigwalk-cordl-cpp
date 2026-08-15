#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/Reserved02Options.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Reserved02Options)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatClient {
struct Reserved02Options;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatClient::Reserved02Options);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatClient::Reserved02Options, "Epic.OnlineServices.AntiCheatClient", "Reserved02Options");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::AntiCheatClient {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatClient.Reserved02Options
struct CORDL_TYPE Reserved02Options {
public:
// Declarations
 __declspec(property(get=get_Reserved1, put=set_Reserved1)) int64_t  Reserved1;

 __declspec(property(get=get_Reserved2, put=set_Reserved2)) uint32_t  Reserved2;

 __declspec(property(get=get_Reserved3, put=set_Reserved3)) uint32_t  Reserved3;

 __declspec(property(get=get_Reserved4, put=set_Reserved4)) ::System::IntPtr  Reserved4;

/// @brief Method get_Reserved1, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline int64_t get_Reserved1() ;

/// @brief Method get_Reserved2, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_Reserved2() ;

/// @brief Method get_Reserved3, addr 0x1803bdb30, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_Reserved3() ;

/// @brief Method get_Reserved4, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr get_Reserved4() ;

/// @brief Method set_Reserved1, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
inline void set_Reserved1(int64_t  value) ;

/// @brief Method set_Reserved2, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_Reserved2(uint32_t  value) ;

/// @brief Method set_Reserved3, addr 0x1804bdb30, size 0x10, virtual false, abstract: false, final false
inline void set_Reserved3(uint32_t  value) ;

/// @brief Method set_Reserved4, addr 0x1804bda40, size 0x10, virtual false, abstract: false, final false
inline void set_Reserved4(::System::IntPtr  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Reserved02Options() ;

// Ctor Parameters [CppParam { name: "_Reserved1_k__BackingField", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "_Reserved2_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_Reserved3_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_Reserved4_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr Reserved02Options(int64_t  _Reserved1_k__BackingField, uint32_t  _Reserved2_k__BackingField, uint32_t  _Reserved3_k__BackingField, ::System::IntPtr  _Reserved4_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9446};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <Reserved1>k__BackingField, offset: 0x0, size: 0x8, def value: None
 int64_t  _Reserved1_k__BackingField;

/// @brief Field <Reserved2>k__BackingField, offset: 0x8, size: 0x4, def value: None
 uint32_t  _Reserved2_k__BackingField;

/// @brief Field <Reserved3>k__BackingField, offset: 0xc, size: 0x4, def value: None
 uint32_t  _Reserved3_k__BackingField;

/// @brief Field <Reserved4>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  _Reserved4_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::Reserved02Options, _Reserved1_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::Reserved02Options, _Reserved2_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::Reserved02Options, _Reserved3_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::Reserved02Options, _Reserved4_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatClient::Reserved02Options) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatClient
