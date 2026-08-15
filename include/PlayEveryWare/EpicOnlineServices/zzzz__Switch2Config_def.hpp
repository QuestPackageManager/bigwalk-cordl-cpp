#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/Switch2Config.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayEveryWare/EpicOnlineServices/zzzz__PlatformConfig_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Switch2Config)
namespace Epic::OnlineServices::IntegratedPlatform {
struct IntegratedPlatformManagementFlags;
}
namespace PlayEveryWare::EpicOnlineServices {
class Switch2Config___c;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class Switch2Config;
}
namespace PlayEveryWare::EpicOnlineServices {
class Switch2Config___c;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::Switch2Config*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::Switch2Config___c*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::Switch2Config*, "PlayEveryWare.EpicOnlineServices", "Switch2Config");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::Switch2Config___c*, "PlayEveryWare.EpicOnlineServices", "Switch2Config/<>c");
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.Switch2Config/<>c
class CORDL_TYPE Switch2Config___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::PlayEveryWare::EpicOnlineServices::Switch2Config___c*  __9;

static inline ::PlayEveryWare::EpicOnlineServices::Switch2Config___c* New_ctor() ;

/// @brief Method <.cctor>b__5_0, addr 0x180548f70, size 0x50, virtual false, abstract: false, final false
inline ::PlayEveryWare::EpicOnlineServices::Switch2Config* __cctor_b__5_0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::PlayEveryWare::EpicOnlineServices::Switch2Config___c* getStaticF___9() ;

static inline void setStaticF___9(::PlayEveryWare::EpicOnlineServices::Switch2Config___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Switch2Config___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Switch2Config___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Switch2Config___c(Switch2Config___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Switch2Config___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Switch2Config___c(Switch2Config___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18930};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::Switch2Config___c) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies PlayEveryWare.EpicOnlineServices.PlatformConfig
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.Switch2Config
class CORDL_TYPE Switch2Config : public ::PlayEveryWare::EpicOnlineServices::PlatformConfig {
public:
// Declarations
using __c = ::PlayEveryWare::EpicOnlineServices::Switch2Config___c;

/// @brief Field cacheDirectory, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_cacheDirectory, put=__cordl_internal_set_cacheDirectory)) ::StringW  cacheDirectory;

/// @brief Field cacheIndexForEOSSDK, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_cacheIndexForEOSSDK, put=__cordl_internal_set_cacheIndexForEOSSDK)) uint32_t  cacheIndexForEOSSDK;

/// @brief Field cacheStorageTotalSizeKB, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_cacheStorageTotalSizeKB, put=__cordl_internal_set_cacheStorageTotalSizeKB)) uint64_t  cacheStorageTotalSizeKB;

/// @brief Field useCacheStorge, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_useCacheStorge, put=__cordl_internal_set_useCacheStorge)) bool  useCacheStorge;

/// @brief Method CalculateJournalSize, addr 0x180546970, size 0x80, virtual false, abstract: false, final false
inline uint64_t CalculateJournalSize() ;

/// @brief Method GetCacheDirectoryForPlatformInitOptions, addr 0x1805469f0, size 0x30, virtual false, abstract: false, final false
inline ::StringW GetCacheDirectoryForPlatformInitOptions() ;

/// @brief Method GetCacheIndexForSystemInitializeOptions, addr 0x1804081d0, size 0x10, virtual false, abstract: false, final false
inline int32_t GetCacheIndexForSystemInitializeOptions() ;

/// @brief Method GetDefaultIntegratedPlatformManagementFlags, addr 0x180546a20, size 0x10, virtual true, abstract: false, final false
inline ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags GetDefaultIntegratedPlatformManagementFlags() ;

/// @brief Method GetTotalCacheSizeForSystemInitializeOptions, addr 0x180546a30, size 0x20, virtual false, abstract: false, final false
inline int32_t GetTotalCacheSizeForSystemInitializeOptions() ;

/// @brief Method InitializationRoutine, addr 0x180546a50, size 0x10, virtual false, abstract: false, final false
static inline void InitializationRoutine() ;

/// @brief Method IsJournalCacheSize16Based, addr 0x180546a60, size 0x10, virtual false, abstract: false, final false
inline bool IsJournalCacheSize16Based() ;

static inline ::PlayEveryWare::EpicOnlineServices::Switch2Config* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_cacheDirectory() const;

constexpr ::StringW& __cordl_internal_get_cacheDirectory() ;

constexpr uint32_t const& __cordl_internal_get_cacheIndexForEOSSDK() const;

constexpr uint32_t& __cordl_internal_get_cacheIndexForEOSSDK() ;

constexpr uint64_t const& __cordl_internal_get_cacheStorageTotalSizeKB() const;

constexpr uint64_t& __cordl_internal_get_cacheStorageTotalSizeKB() ;

constexpr bool const& __cordl_internal_get_useCacheStorge() const;

constexpr bool& __cordl_internal_get_useCacheStorge() ;

constexpr void __cordl_internal_set_cacheDirectory(::StringW  value) ;

constexpr void __cordl_internal_set_cacheIndexForEOSSDK(uint32_t  value) ;

constexpr void __cordl_internal_set_cacheStorageTotalSizeKB(uint64_t  value) ;

constexpr void __cordl_internal_set_useCacheStorge(bool  value) ;

/// @brief Method .ctor, addr 0x180546c10, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Switch2Config() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Switch2Config", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Switch2Config(Switch2Config && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Switch2Config", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Switch2Config(Switch2Config const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18931};

/// @brief Field useCacheStorge, offset: 0xa0, size: 0x1, def value: None
 bool  ___useCacheStorge;

/// @brief Field cacheIndexForEOSSDK, offset: 0xa4, size: 0x4, def value: None
 uint32_t  ___cacheIndexForEOSSDK;

/// @brief Field cacheStorageTotalSizeKB, offset: 0xa8, size: 0x8, def value: None
 uint64_t  ___cacheStorageTotalSizeKB;

/// @brief Field cacheDirectory, offset: 0xb0, size: 0x8, def value: None
 ::StringW  ___cacheDirectory;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Switch2Config, ___useCacheStorge) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Switch2Config, ___cacheIndexForEOSSDK) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Switch2Config, ___cacheStorageTotalSizeKB) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Switch2Config, ___cacheDirectory) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::Switch2Config) == 0xb8, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
