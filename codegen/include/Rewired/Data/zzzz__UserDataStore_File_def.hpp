#pragma once
// IWYU pragma private; include "Rewired/Data/UserDataStore_File.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Data/zzzz__UserDataStore_KeyValue_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UserDataStore_File)
namespace Rewired::Data {
class UserDataStore_File_CLZF2;
}
namespace Rewired::Data {
class UserDataStore_File_Codec;
}
namespace Rewired::Data {
struct UserDataStore_File_DataFormat;
}
namespace Rewired::Data {
class UserDataStore_File_DataStore;
}
namespace Rewired::Data {
class UserDataStore_File_IDataHandler;
}
namespace Rewired::Data {
class UserDataStore_File_LocalFileDataHandler;
}
namespace Rewired::Data {
class UserDataStore_File_UTF8Text;
}
namespace Rewired::Data {
class UserDataStore_KeyValue_IDataStore;
}
namespace Rewired::Utils::Libraries::CLZF2 {
class CLZF2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Data {
struct UserDataStore_File_DataFormat;
}
namespace Rewired::Data {
class UserDataStore_File;
}
namespace Rewired::Data {
class UserDataStore_File_CLZF2;
}
namespace Rewired::Data {
class UserDataStore_File_Codec;
}
namespace Rewired::Data {
class UserDataStore_File_DataStore;
}
namespace Rewired::Data {
class UserDataStore_File_IDataHandler;
}
namespace Rewired::Data {
class UserDataStore_File_LocalFileDataHandler;
}
namespace Rewired::Data {
class UserDataStore_File_UTF8Text;
}
// Write type traits
MARK_VAL_T(::Rewired::Data::UserDataStore_File_DataFormat);
MARK_REF_T(::Rewired::Data::UserDataStore_File*);
MARK_REF_T(::Rewired::Data::UserDataStore_File_CLZF2*);
MARK_REF_T(::Rewired::Data::UserDataStore_File_Codec*);
MARK_REF_T(::Rewired::Data::UserDataStore_File_DataStore*);
MARK_REF_T(::Rewired::Data::UserDataStore_File_IDataHandler*);
MARK_REF_T(::Rewired::Data::UserDataStore_File_LocalFileDataHandler*);
MARK_REF_T(::Rewired::Data::UserDataStore_File_UTF8Text*);
DEFINE_IL2CPP_CLASS(::Rewired::Data::UserDataStore_File_DataFormat, "Rewired.Data", "UserDataStore_File/DataFormat");
DEFINE_IL2CPP_CLASS(::Rewired::Data::UserDataStore_File*, "Rewired.Data", "UserDataStore_File");
DEFINE_IL2CPP_CLASS(::Rewired::Data::UserDataStore_File_CLZF2*, "Rewired.Data", "UserDataStore_File/CLZF2");
DEFINE_IL2CPP_CLASS(::Rewired::Data::UserDataStore_File_Codec*, "Rewired.Data", "UserDataStore_File/Codec");
DEFINE_IL2CPP_CLASS(::Rewired::Data::UserDataStore_File_DataStore*, "Rewired.Data", "UserDataStore_File/DataStore");
DEFINE_IL2CPP_CLASS(::Rewired::Data::UserDataStore_File_IDataHandler*, "Rewired.Data", "UserDataStore_File/IDataHandler");
DEFINE_IL2CPP_CLASS(::Rewired::Data::UserDataStore_File_LocalFileDataHandler*, "Rewired.Data", "UserDataStore_File/LocalFileDataHandler");
DEFINE_IL2CPP_CLASS(::Rewired::Data::UserDataStore_File_UTF8Text*, "Rewired.Data", "UserDataStore_File/UTF8Text");
// Dependencies System.Object
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.UserDataStore_File/DataStore
class CORDL_TYPE UserDataStore_File_DataStore : public ::System::Object {
public:
// Declarations
/// @brief Field _absFilePath, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__absFilePath, put=__cordl_internal_set__absFilePath)) ::StringW  _absFilePath;

/// @brief Field _data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  _data;

/// @brief Field _dataHandler, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__dataHandler, put=__cordl_internal_set__dataHandler)) ::Rewired::Data::UserDataStore_File_IDataHandler*  _dataHandler;

/// @brief Convert operator to "::Rewired::Data::UserDataStore_KeyValue_IDataStore"
constexpr operator  ::Rewired::Data::UserDataStore_KeyValue_IDataStore*() noexcept;

/// @brief Method Clear, addr 0x180391fc0, size 0x100, virtual true, abstract: false, final true
inline bool Clear() ;

/// @brief Method Load, addr 0x1803920c0, size 0x130, virtual true, abstract: false, final true
inline bool Load() ;

static inline ::Rewired::Data::UserDataStore_File_DataStore* New_ctor(::StringW  fileName, ::StringW  absDirectory, ::Rewired::Data::UserDataStore_File_IDataHandler*  dataHandler) ;

/// @brief Method Save, addr 0x1803921f0, size 0xe0, virtual true, abstract: false, final true
inline bool Save() ;

/// @brief Method SetValue, addr 0x1803922d0, size 0x70, virtual true, abstract: false, final true
inline bool SetValue(::StringW  key, ::System::Object*  value) ;

/// @brief Method TryGetValue, addr 0x180392340, size 0x80, virtual true, abstract: false, final true
inline bool TryGetValue(::StringW  key, ::by_ref<::System::Object*>  value) ;

constexpr ::StringW const& __cordl_internal_get__absFilePath() const;

constexpr ::StringW& __cordl_internal_get__absFilePath() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* const& __cordl_internal_get__data() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*& __cordl_internal_get__data() ;

constexpr ::Rewired::Data::UserDataStore_File_IDataHandler* const& __cordl_internal_get__dataHandler() const;

constexpr ::Rewired::Data::UserDataStore_File_IDataHandler*& __cordl_internal_get__dataHandler() ;

constexpr void __cordl_internal_set__absFilePath(::StringW  value) ;

constexpr void __cordl_internal_set__data(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

constexpr void __cordl_internal_set__dataHandler(::Rewired::Data::UserDataStore_File_IDataHandler*  value) ;

/// @brief Method .ctor, addr 0x1803923c0, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(::StringW  fileName, ::StringW  absDirectory, ::Rewired::Data::UserDataStore_File_IDataHandler*  dataHandler) ;

/// @brief Convert to "::Rewired::Data::UserDataStore_KeyValue_IDataStore"
constexpr ::Rewired::Data::UserDataStore_KeyValue_IDataStore* i___Rewired__Data__UserDataStore_KeyValue_IDataStore() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserDataStore_File_DataStore() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserDataStore_File_DataStore", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserDataStore_File_DataStore(UserDataStore_File_DataStore && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserDataStore_File_DataStore", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserDataStore_File_DataStore(UserDataStore_File_DataStore const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5662};

/// @brief Field _data, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  ____data;

/// @brief Field _absFilePath, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____absFilePath;

/// @brief Field _dataHandler, offset: 0x20, size: 0x8, def value: None
 ::Rewired::Data::UserDataStore_File_IDataHandler*  ____dataHandler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::UserDataStore_File_DataStore, ____data) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::UserDataStore_File_DataStore, ____absFilePath) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::UserDataStore_File_DataStore, ____dataHandler) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::UserDataStore_File_DataStore) == 0x28, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies System.Object
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.UserDataStore_File/LocalFileDataHandler
class CORDL_TYPE UserDataStore_File_LocalFileDataHandler : public ::System::Object {
public:
// Declarations
/// @brief Field _codec, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__codec, put=__cordl_internal_set__codec)) ::Rewired::Data::UserDataStore_File_Codec*  _codec;

/// @brief Field _dataFormatDelegate, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__dataFormatDelegate, put=__cordl_internal_set__dataFormatDelegate)) ::System::Func_1<::Rewired::Data::UserDataStore_File_DataFormat>*  _dataFormatDelegate;

/// @brief Convert operator to "::Rewired::Data::UserDataStore_File_IDataHandler"
constexpr operator  ::Rewired::Data::UserDataStore_File_IDataHandler*() noexcept;

/// @brief Method Clear, addr 0x180394b50, size 0x50, virtual true, abstract: false, final true
inline bool Clear(::StringW  absoluteFilePath) ;

/// @brief Method Load, addr 0x180394ba0, size 0x130, virtual true, abstract: false, final true
inline bool Load(::StringW  absoluteFilePath, ::by_ref<::StringW>  data) ;

static inline ::Rewired::Data::UserDataStore_File_LocalFileDataHandler* New_ctor(::System::Func_1<::Rewired::Data::UserDataStore_File_DataFormat>*  dataFormatDelegate, ::Rewired::Data::UserDataStore_File_Codec*  codec) ;

/// @brief Method Save, addr 0x180394cd0, size 0x110, virtual true, abstract: false, final true
inline bool Save(::StringW  absoluteFilePath, ::StringW  data) ;

constexpr ::Rewired::Data::UserDataStore_File_Codec* const& __cordl_internal_get__codec() const;

constexpr ::Rewired::Data::UserDataStore_File_Codec*& __cordl_internal_get__codec() ;

constexpr ::System::Func_1<::Rewired::Data::UserDataStore_File_DataFormat>* const& __cordl_internal_get__dataFormatDelegate() const;

constexpr ::System::Func_1<::Rewired::Data::UserDataStore_File_DataFormat>*& __cordl_internal_get__dataFormatDelegate() ;

constexpr void __cordl_internal_set__codec(::Rewired::Data::UserDataStore_File_Codec*  value) ;

constexpr void __cordl_internal_set__dataFormatDelegate(::System::Func_1<::Rewired::Data::UserDataStore_File_DataFormat>*  value) ;

/// @brief Method .ctor, addr 0x180394de0, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::System::Func_1<::Rewired::Data::UserDataStore_File_DataFormat>*  dataFormatDelegate, ::Rewired::Data::UserDataStore_File_Codec*  codec) ;

/// @brief Convert to "::Rewired::Data::UserDataStore_File_IDataHandler"
constexpr ::Rewired::Data::UserDataStore_File_IDataHandler* i___Rewired__Data__UserDataStore_File_IDataHandler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserDataStore_File_LocalFileDataHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserDataStore_File_LocalFileDataHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserDataStore_File_LocalFileDataHandler(UserDataStore_File_LocalFileDataHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserDataStore_File_LocalFileDataHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserDataStore_File_LocalFileDataHandler(UserDataStore_File_LocalFileDataHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5663};

/// @brief Field _dataFormatDelegate, offset: 0x10, size: 0x8, def value: None
 ::System::Func_1<::Rewired::Data::UserDataStore_File_DataFormat>*  ____dataFormatDelegate;

/// @brief Field _codec, offset: 0x18, size: 0x8, def value: None
 ::Rewired::Data::UserDataStore_File_Codec*  ____codec;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::UserDataStore_File_LocalFileDataHandler, ____dataFormatDelegate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::UserDataStore_File_LocalFileDataHandler, ____codec) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::UserDataStore_File_LocalFileDataHandler) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies System.Object
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.UserDataStore_File/Codec
class CORDL_TYPE UserDataStore_File_Codec : public ::System::Object {
public:
// Declarations
/// @brief Method Decode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW Decode(::ArrayW<uint8_t>  data) ;

/// @brief Method Encode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> Encode(::StringW  string) ;

static inline ::Rewired::Data::UserDataStore_File_Codec* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserDataStore_File_Codec() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserDataStore_File_Codec", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserDataStore_File_Codec(UserDataStore_File_Codec && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserDataStore_File_Codec", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserDataStore_File_Codec(UserDataStore_File_Codec const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5664};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Data::UserDataStore_File_Codec) == 0x10, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies Rewired.Data.UserDataStore_File::Codec
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.UserDataStore_File/UTF8Text
class CORDL_TYPE UserDataStore_File_UTF8Text : public ::Rewired::Data::UserDataStore_File_Codec {
public:
// Declarations
/// @brief Method Decode, addr 0x18039f8a0, size 0x40, virtual true, abstract: false, final false
inline ::StringW Decode(::ArrayW<uint8_t>  data) ;

/// @brief Method Encode, addr 0x18039f8e0, size 0x40, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> Encode(::StringW  string) ;

static inline ::Rewired::Data::UserDataStore_File_UTF8Text* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserDataStore_File_UTF8Text() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserDataStore_File_UTF8Text", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserDataStore_File_UTF8Text(UserDataStore_File_UTF8Text && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserDataStore_File_UTF8Text", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserDataStore_File_UTF8Text(UserDataStore_File_UTF8Text const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5665};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Data::UserDataStore_File_UTF8Text) == 0x10, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies Rewired.Data.UserDataStore_File::Codec
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.UserDataStore_File/CLZF2
class CORDL_TYPE UserDataStore_File_CLZF2 : public ::Rewired::Data::UserDataStore_File_Codec {
public:
// Declarations
/// @brief Field _cLZF2, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__cLZF2, put=__cordl_internal_set__cLZF2)) ::Rewired::Utils::Libraries::CLZF2::CLZF2*  _cLZF2;

/// @brief Method Decode, addr 0x180391eb0, size 0x70, virtual true, abstract: false, final false
inline ::StringW Decode(::ArrayW<uint8_t>  data) ;

/// @brief Method Encode, addr 0x180391f20, size 0x60, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> Encode(::StringW  string) ;

static inline ::Rewired::Data::UserDataStore_File_CLZF2* New_ctor() ;

constexpr ::Rewired::Utils::Libraries::CLZF2::CLZF2* const& __cordl_internal_get__cLZF2() const;

constexpr ::Rewired::Utils::Libraries::CLZF2::CLZF2*& __cordl_internal_get__cLZF2() ;

constexpr void __cordl_internal_set__cLZF2(::Rewired::Utils::Libraries::CLZF2::CLZF2*  value) ;

/// @brief Method .ctor, addr 0x180391f80, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserDataStore_File_CLZF2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserDataStore_File_CLZF2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserDataStore_File_CLZF2(UserDataStore_File_CLZF2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserDataStore_File_CLZF2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserDataStore_File_CLZF2(UserDataStore_File_CLZF2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5666};

/// @brief Field _cLZF2, offset: 0x10, size: 0x8, def value: None
 ::Rewired::Utils::Libraries::CLZF2::CLZF2*  ____cLZF2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::UserDataStore_File_CLZF2, ____cLZF2) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::UserDataStore_File_CLZF2) == 0x18, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies 
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.UserDataStore_File/IDataHandler
class CORDL_TYPE UserDataStore_File_IDataHandler {
public:
// Declarations
/// @brief Method Clear, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Clear(::StringW  absoluteFilePath) ;

/// @brief Method Load, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Load(::StringW  absoluteFilePath, ::by_ref<::StringW>  data) ;

/// @brief Method Save, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Save(::StringW  absoluteFilePath, ::StringW  data) ;

// Ctor Parameters [CppParam { name: "", ty: "UserDataStore_File_IDataHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserDataStore_File_IDataHandler(UserDataStore_File_IDataHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5667};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Data
// Dependencies 
namespace Rewired::Data {
// Is value type: true
// CS Name: Rewired.Data.UserDataStore_File/DataFormat
struct CORDL_TYPE UserDataStore_File_DataFormat {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UserDataStore_File_DataFormat_Unwrapped
enum struct __UserDataStore_File_DataFormat_Unwrapped : int32_t {
__E_Text = static_cast<int32_t>(0x0),
__E_Binary = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UserDataStore_File_DataFormat_Unwrapped () const noexcept {
return static_cast<__UserDataStore_File_DataFormat_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UserDataStore_File_DataFormat() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UserDataStore_File_DataFormat(int32_t  value__) noexcept;

/// @brief Field Binary value: I32(1)
static ::Rewired::Data::UserDataStore_File_DataFormat const Binary;

/// @brief Field Text value: I32(0)
static ::Rewired::Data::UserDataStore_File_DataFormat const Text;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5668};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::UserDataStore_File_DataFormat, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::UserDataStore_File_DataFormat) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies Rewired.Data.UserDataStore_File::DataFormat, Rewired.Data.UserDataStore_KeyValue
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.UserDataStore_File
class CORDL_TYPE UserDataStore_File : public ::Rewired::Data::UserDataStore_KeyValue {
public:
// Declarations
using CLZF2 = ::Rewired::Data::UserDataStore_File_CLZF2;

using Codec = ::Rewired::Data::UserDataStore_File_Codec;

using DataFormat = ::Rewired::Data::UserDataStore_File_DataFormat;

using DataStore = ::Rewired::Data::UserDataStore_File_DataStore;

using IDataHandler = ::Rewired::Data::UserDataStore_File_IDataHandler;

using LocalFileDataHandler = ::Rewired::Data::UserDataStore_File_LocalFileDataHandler;

using UTF8Text = ::Rewired::Data::UserDataStore_File_UTF8Text;

/// @brief Field __dataHandler, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get___dataHandler, put=__cordl_internal_set___dataHandler)) ::Rewired::Data::UserDataStore_File_IDataHandler*  __dataHandler;

/// @brief Field __directory, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get___directory, put=__cordl_internal_set___directory)) ::StringW  __directory;

/// @brief Field _dataFormat, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__dataFormat, put=__cordl_internal_set__dataFormat)) ::Rewired::Data::UserDataStore_File_DataFormat  _dataFormat;

/// @brief Field _dataStore, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__dataStore, put=__cordl_internal_set__dataStore)) ::Rewired::Data::UserDataStore_File_DataStore*  _dataStore;

/// @brief Field _fileName, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__fileName, put=__cordl_internal_set__fileName)) ::StringW  _fileName;

/// @brief Field _initialized, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get__initialized, put=__cordl_internal_set__initialized)) bool  _initialized;

 __declspec(property(get=get_dataFormat, put=set_dataFormat)) ::Rewired::Data::UserDataStore_File_DataFormat  dataFormat;

 __declspec(property(get=get_dataHandler, put=set_dataHandler)) ::Rewired::Data::UserDataStore_File_IDataHandler*  dataHandler;

 __declspec(property(get=get_dataStore)) ::Rewired::Data::UserDataStore_KeyValue_IDataStore*  dataStore;

 __declspec(property(get=get_directory, put=set_directory)) ::StringW  directory;

 __declspec(property(get=get_fileName, put=set_fileName)) ::StringW  fileName;

/// @brief Field thisScriptName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_thisScriptName, put=setStaticF_thisScriptName)) ::StringW  thisScriptName;

static inline ::Rewired::Data::UserDataStore_File* New_ctor() ;

/// @brief Method OnDataSourceChanged, addr 0x18039f9d0, size 0x1e0, virtual false, abstract: false, final false
inline void OnDataSourceChanged() ;

/// @brief Method OnInitialize, addr 0x18039fbb0, size 0xb0, virtual true, abstract: false, final false
inline void OnInitialize() ;

/// @brief Method SetInitialValues, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void SetInitialValues() ;

constexpr ::Rewired::Data::UserDataStore_File_IDataHandler* const& __cordl_internal_get___dataHandler() const;

constexpr ::Rewired::Data::UserDataStore_File_IDataHandler*& __cordl_internal_get___dataHandler() ;

constexpr ::StringW const& __cordl_internal_get___directory() const;

constexpr ::StringW& __cordl_internal_get___directory() ;

constexpr ::Rewired::Data::UserDataStore_File_DataFormat const& __cordl_internal_get__dataFormat() const;

constexpr ::Rewired::Data::UserDataStore_File_DataFormat& __cordl_internal_get__dataFormat() ;

constexpr ::Rewired::Data::UserDataStore_File_DataStore* const& __cordl_internal_get__dataStore() const;

constexpr ::Rewired::Data::UserDataStore_File_DataStore*& __cordl_internal_get__dataStore() ;

constexpr ::StringW const& __cordl_internal_get__fileName() const;

constexpr ::StringW& __cordl_internal_get__fileName() ;

constexpr bool const& __cordl_internal_get__initialized() const;

constexpr bool& __cordl_internal_get__initialized() ;

constexpr void __cordl_internal_set___dataHandler(::Rewired::Data::UserDataStore_File_IDataHandler*  value) ;

constexpr void __cordl_internal_set___directory(::StringW  value) ;

constexpr void __cordl_internal_set__dataFormat(::Rewired::Data::UserDataStore_File_DataFormat  value) ;

constexpr void __cordl_internal_set__dataStore(::Rewired::Data::UserDataStore_File_DataStore*  value) ;

constexpr void __cordl_internal_set__fileName(::StringW  value) ;

constexpr void __cordl_internal_set__initialized(bool  value) ;

/// @brief Method .ctor, addr 0x18039fce0, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <get_dataHandler>b__17_0, addr 0x18039fc60, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Data::UserDataStore_File_DataFormat _get_dataHandler_b__17_0() ;

static inline ::StringW getStaticF_thisScriptName() ;

/// @brief Method get_dataFormat, addr 0x18039fc60, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Data::UserDataStore_File_DataFormat get_dataFormat() ;

/// @brief Method get_dataHandler, addr 0x18039fd60, size 0xe0, virtual false, abstract: false, final false
inline ::Rewired::Data::UserDataStore_File_IDataHandler* get_dataHandler() ;

/// @brief Method get_dataStore, addr 0x18039fe40, size 0x10, virtual true, abstract: false, final false
inline ::Rewired::Data::UserDataStore_KeyValue_IDataStore* get_dataStore() ;

/// @brief Method get_directory, addr 0x18039fe50, size 0x50, virtual false, abstract: false, final false
inline ::StringW get_directory() ;

/// @brief Method get_fileName, addr 0x1802e75e0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_fileName() ;

static inline void setStaticF_thisScriptName(::StringW  value) ;

/// @brief Method set_dataFormat, addr 0x18039fea0, size 0x20, virtual false, abstract: false, final false
inline void set_dataFormat(::Rewired::Data::UserDataStore_File_DataFormat  value) ;

/// @brief Method set_dataHandler, addr 0x18039fec0, size 0x40, virtual false, abstract: false, final false
inline void set_dataHandler(::Rewired::Data::UserDataStore_File_IDataHandler*  value) ;

/// @brief Method set_directory, addr 0x18039ff00, size 0x40, virtual false, abstract: false, final false
inline void set_directory(::StringW  value) ;

/// @brief Method set_fileName, addr 0x18039ff40, size 0x40, virtual false, abstract: false, final false
inline void set_fileName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserDataStore_File() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserDataStore_File", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserDataStore_File(UserDataStore_File && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserDataStore_File", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserDataStore_File(UserDataStore_File const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5669};

/// @brief Field defaultExtensionBinary offset 0xffffffff size 0x8
static constexpr ::ConstString  defaultExtensionBinary{u".bin"};

/// @brief Field defaultExtensionText offset 0xffffffff size 0x8
static constexpr ::ConstString  defaultExtensionText{u".json"};

/// @brief Field defaultFileName offset 0xffffffff size 0x8
static constexpr ::ConstString  defaultFileName{u"RewiredSaveData.json"};

/// @brief Field logPrefix offset 0xffffffff size 0x8
static constexpr ::ConstString  logPrefix{u"Rewired: "};

/// @brief Field _fileName, offset: 0x58, size: 0x8, def value: None
 ::StringW  ____fileName;

/// @brief Field _dataFormat, offset: 0x60, size: 0x4, def value: None
 ::Rewired::Data::UserDataStore_File_DataFormat  ____dataFormat;

/// @brief Field __directory, offset: 0x68, size: 0x8, def value: None
 ::StringW  _____directory;

/// @brief Field _dataStore, offset: 0x70, size: 0x8, def value: None
 ::Rewired::Data::UserDataStore_File_DataStore*  ____dataStore;

/// @brief Field __dataHandler, offset: 0x78, size: 0x8, def value: None
 ::Rewired::Data::UserDataStore_File_IDataHandler*  _____dataHandler;

/// @brief Field _initialized, offset: 0x80, size: 0x1, def value: None
 bool  ____initialized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::UserDataStore_File, ____fileName) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::UserDataStore_File, ____dataFormat) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::UserDataStore_File, _____directory) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::UserDataStore_File, ____dataStore) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::UserDataStore_File, _____dataHandler) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::UserDataStore_File, ____initialized) == 0x80, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::UserDataStore_File) == 0x88, "Size mismatch!");

} // namespace end def Rewired::Data
