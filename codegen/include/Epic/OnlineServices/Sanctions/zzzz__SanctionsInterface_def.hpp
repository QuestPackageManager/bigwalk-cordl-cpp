#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sanctions/SanctionsInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SanctionsInterface)
namespace Epic::OnlineServices::Sanctions {
struct CopyPlayerSanctionByIndexOptions;
}
namespace Epic::OnlineServices::Sanctions {
class CreatePlayerSanctionAppealCallback;
}
namespace Epic::OnlineServices::Sanctions {
struct CreatePlayerSanctionAppealOptions;
}
namespace Epic::OnlineServices::Sanctions {
struct GetPlayerSanctionCountOptions;
}
namespace Epic::OnlineServices::Sanctions {
class OnQueryActivePlayerSanctionsCallback;
}
namespace Epic::OnlineServices::Sanctions {
struct PlayerSanction;
}
namespace Epic::OnlineServices::Sanctions {
struct QueryActivePlayerSanctionsOptions;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices::Sanctions {
class SanctionsInterface;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Sanctions::SanctionsInterface*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sanctions::SanctionsInterface*, "Epic.OnlineServices.Sanctions", "SanctionsInterface");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::Sanctions {
// Is value type: false
// CS Name: Epic.OnlineServices.Sanctions.SanctionsInterface
class CORDL_TYPE SanctionsInterface : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Method CopyPlayerSanctionByIndex, addr 0x1804f1490, size 0xc0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyPlayerSanctionByIndex(::by_ref<::Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Sanctions::PlayerSanction>>  outSanction) ;

/// @brief Method CreatePlayerSanctionAppeal, addr 0x1804f1550, size 0x230, virtual false, abstract: false, final false
inline void CreatePlayerSanctionAppeal(::by_ref<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallback*  completionDelegate) ;

/// @brief Method GetPlayerSanctionCount, addr 0x1804f1780, size 0x70, virtual false, abstract: false, final false
inline uint32_t GetPlayerSanctionCount(::by_ref<::Epic::OnlineServices::Sanctions::GetPlayerSanctionCountOptions>  options) ;

static inline ::Epic::OnlineServices::Sanctions::SanctionsInterface* New_ctor() ;

static inline ::Epic::OnlineServices::Sanctions::SanctionsInterface* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method QueryActivePlayerSanctions, addr 0x1804f17f0, size 0x230, virtual false, abstract: false, final false
inline void QueryActivePlayerSanctions(::by_ref<::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallback*  completionDelegate) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804f0510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SanctionsInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SanctionsInterface", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SanctionsInterface(SanctionsInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SanctionsInterface", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SanctionsInterface(SanctionsInterface const& ) = delete;

/// @brief Field COPYPLAYERSANCTIONBYINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYPLAYERSANCTIONBYINDEX_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field CREATEPLAYERSANCTIONAPPEAL_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  CREATEPLAYERSANCTIONAPPEAL_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETPLAYERSANCTIONCOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETPLAYERSANCTIONCOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field PLAYERSANCTION_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  PLAYERSANCTION_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field QUERYACTIVEPLAYERSANCTIONS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  QUERYACTIVEPLAYERSANCTIONS_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7893};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Sanctions::SanctionsInterface) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sanctions
