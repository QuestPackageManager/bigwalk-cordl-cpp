#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Metrics/MetricsInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MetricsInterface)
namespace Epic::OnlineServices::Metrics {
struct BeginPlayerSessionOptions;
}
namespace Epic::OnlineServices::Metrics {
struct EndPlayerSessionOptions;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices::Metrics {
class MetricsInterface;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Metrics::MetricsInterface*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Metrics::MetricsInterface*, "Epic.OnlineServices.Metrics", "MetricsInterface");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::Metrics {
// Is value type: false
// CS Name: Epic.OnlineServices.Metrics.MetricsInterface
class CORDL_TYPE MetricsInterface : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Method BeginPlayerSession, addr 0x18050c270, size 0x50, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result BeginPlayerSession(::by_ref<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>  options) ;

/// @brief Method EndPlayerSession, addr 0x18050c2c0, size 0xd0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result EndPlayerSession(::by_ref<::Epic::OnlineServices::Metrics::EndPlayerSessionOptions>  options) ;

static inline ::Epic::OnlineServices::Metrics::MetricsInterface* New_ctor() ;

static inline ::Epic::OnlineServices::Metrics::MetricsInterface* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804f0510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetricsInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetricsInterface", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MetricsInterface(MetricsInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetricsInterface", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetricsInterface(MetricsInterface const& ) = delete;

/// @brief Field BEGINPLAYERSESSION_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  BEGINPLAYERSESSION_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ENDPLAYERSESSION_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ENDPLAYERSESSION_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8415};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Metrics::MetricsInterface) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Metrics
