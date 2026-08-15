#pragma once
// IWYU pragma private; include "Shipmate/Porting/Mocked/MockedPlatformStorage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Shipmate/Porting/zzzz__AbstractPlatformStorage_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MockedPlatformStorage)
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace Shipmate::Porting {
class DirectoryFileInfo;
}
namespace Shipmate::Porting {
struct EStorageType;
}
// Forward declare root types
namespace Shipmate::Porting::Mocked {
class MockedPlatformStorage;
}
// Write type traits
MARK_REF_T(::Shipmate::Porting::Mocked::MockedPlatformStorage*);
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::Mocked::MockedPlatformStorage*, "Shipmate.Porting.Mocked", "MockedPlatformStorage");
// Dependencies Shipmate.Porting.AbstractPlatformStorage
namespace Shipmate::Porting::Mocked {
// Is value type: false
// CS Name: Shipmate.Porting.Mocked.MockedPlatformStorage
class CORDL_TYPE MockedPlatformStorage : public ::Shipmate::Porting::AbstractPlatformStorage {
public:
// Declarations
/// @brief Method DeleteFile, addr 0x181ac6190, size 0x40, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask DeleteFile(::StringW  aFileName, ::StringW  aSubFolder, ::Shipmate::Porting::EStorageType  aStorageType) ;

/// @brief Method FileExists, addr 0x181ac9850, size 0x20, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> FileExists(::StringW  aFileName, ::StringW  aSubFolder, ::Shipmate::Porting::EStorageType  aStorageType) ;

/// @brief Method ListFilesInDirectory, addr 0x181ac9870, size 0x80, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<::Shipmate::Porting::DirectoryFileInfo*>> ListFilesInDirectory(::StringW  aDirectory, ::Shipmate::Porting::EStorageType  aStorageType) ;

/// @brief Method LoadData, addr 0x181ac98f0, size 0x20, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<uint8_t>> LoadData(::StringW  aFileName, ::StringW  aSubFolder, ::Shipmate::Porting::EStorageType  aStorageType) ;

static inline ::Shipmate::Porting::Mocked::MockedPlatformStorage* New_ctor() ;

/// @brief Method SaveData, addr 0x181ac6190, size 0x40, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask SaveData(::StringW  aFileName, ::ArrayW<uint8_t>  aData, ::StringW  aSubFolder, ::Shipmate::Porting::EStorageType  aStorageType) ;

/// @brief Method .ctor, addr 0x181ac9840, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MockedPlatformStorage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MockedPlatformStorage", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MockedPlatformStorage(MockedPlatformStorage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MockedPlatformStorage", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MockedPlatformStorage(MockedPlatformStorage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21523};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmate::Porting::Mocked::MockedPlatformStorage) == 0x18, "Size mismatch!");

} // namespace end def Shipmate::Porting::Mocked
