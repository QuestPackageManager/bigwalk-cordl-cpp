#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/AndroidFileIOHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AndroidFileIOHelper)
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class AndroidFileIOHelper;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::AndroidFileIOHelper*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::AndroidFileIOHelper*, "PlayEveryWare.EpicOnlineServices", "AndroidFileIOHelper");
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.AndroidFileIOHelper
class CORDL_TYPE AndroidFileIOHelper : public ::System::Object {
public:
// Declarations
/// @brief Method FileExists, addr 0x1805348e0, size 0x150, virtual false, abstract: false, final false
static inline bool FileExists(::StringW  filePath) ;

static inline ::PlayEveryWare::EpicOnlineServices::AndroidFileIOHelper* New_ctor() ;

/// @brief Method ProcessRequest, addr 0x180534a30, size 0x240, virtual false, abstract: false, final false
static inline ::StringW ProcessRequest(::StringW  filePath, ::UnityEngine::Networking::UnityWebRequest*  request) ;

/// @brief Method ReadAllText, addr 0x180534c70, size 0x150, virtual false, abstract: false, final false
static inline ::StringW ReadAllText(::StringW  filePath) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidFileIOHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidFileIOHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidFileIOHelper(AndroidFileIOHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidFileIOHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidFileIOHelper(AndroidFileIOHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18806};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::AndroidFileIOHelper) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
