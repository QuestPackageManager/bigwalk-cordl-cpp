#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/Reserved01OptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Reserved01OptionsInternal)
namespace Epic::OnlineServices::AntiCheatClient {
struct Reserved01Options;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatClient {
struct Reserved01OptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatClient::Reserved01OptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatClient::Reserved01OptionsInternal, "Epic.OnlineServices.AntiCheatClient", "Reserved01OptionsInternal");
// Dependencies 
namespace Epic::OnlineServices::AntiCheatClient {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatClient.Reserved01OptionsInternal
struct CORDL_TYPE Reserved01OptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::Reserved01Options>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::Reserved01Options>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804bdbc0, size 0x20, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::AntiCheatClient::Reserved01Options>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::Reserved01Options>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::Reserved01Options>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__AntiCheatClient__Reserved01Options_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr Reserved01OptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Reserved01OptionsInternal(int32_t  m_ApiVersion) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9445};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::Reserved01OptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatClient::Reserved01OptionsInternal) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatClient
