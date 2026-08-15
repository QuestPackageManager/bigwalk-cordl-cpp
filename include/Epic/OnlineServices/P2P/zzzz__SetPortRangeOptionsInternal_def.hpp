#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/SetPortRangeOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SetPortRangeOptionsInternal)
namespace Epic::OnlineServices::P2P {
struct SetPortRangeOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::P2P {
struct SetPortRangeOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::P2P::SetPortRangeOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::P2P::SetPortRangeOptionsInternal, "Epic.OnlineServices.P2P", "SetPortRangeOptionsInternal");
// Dependencies 
namespace Epic::OnlineServices::P2P {
// Is value type: true
// CS Name: Epic.OnlineServices.P2P.SetPortRangeOptionsInternal
struct CORDL_TYPE SetPortRangeOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SetPortRangeOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SetPortRangeOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x180533b40, size 0x60, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::P2P::SetPortRangeOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SetPortRangeOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SetPortRangeOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__P2P__SetPortRangeOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr SetPortRangeOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Port", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_MaxAdditionalPortsToTry", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr SetPortRangeOptionsInternal(int32_t  m_ApiVersion, uint16_t  m_Port, uint16_t  m_MaxAdditionalPortsToTry) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9599};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_Port, offset: 0x4, size: 0x2, def value: None
 uint16_t  m_Port;

/// @brief Field m_MaxAdditionalPortsToTry, offset: 0x6, size: 0x2, def value: None
 uint16_t  m_MaxAdditionalPortsToTry;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::P2P::SetPortRangeOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::SetPortRangeOptionsInternal, m_Port) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::SetPortRangeOptionsInternal, m_MaxAdditionalPortsToTry) == 0x6, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::P2P::SetPortRangeOptionsInternal) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::P2P
