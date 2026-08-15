#pragma once
// IWYU pragma private; include "Rewired/Data/UserDataStore_File.hpp"
#include "Rewired/Data/zzzz__UserDataStore_File_impl.hpp"
#include "Rewired/Data/zzzz__UserDataStore_KeyValue_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Data/zzzz__UserDataStore_File_def.hpp"
#include "Rewired/Data/zzzz__UserDataStore_File_def.hpp"
#include "Rewired/Data/zzzz__UserDataStore_KeyValue_def.hpp"
#include "Rewired/Utils/Libraries/CLZF2/zzzz__CLZF2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::Data::UserDataStore_File_DataStore._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_File_DataStore::*)(::StringW, ::StringW, ::Rewired::Data::UserDataStore_File_IDataHandler*)>(&::Rewired::Data::UserDataStore_File_DataStore::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1803923c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File_DataStore*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Rewired::Data::UserDataStore_File_IDataHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_File_DataStore.TryGetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_File_DataStore::*)(::StringW, ::by_ref<::System::Object*>)>(&::Rewired::Data::UserDataStore_File_DataStore::TryGetValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180392340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File_DataStore*>(),
                        {"TryGetValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_File_DataStore.SetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_File_DataStore::*)(::StringW, ::System::Object*)>(&::Rewired::Data::UserDataStore_File_DataStore::SetValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803922d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File_DataStore*>(),
                        {"SetValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_File_DataStore.Save
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_File_DataStore::*)()>(&::Rewired::Data::UserDataStore_File_DataStore::Save)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1803921f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File_DataStore*>(),
                        {"Save", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_File_DataStore.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_File_DataStore::*)()>(&::Rewired::Data::UserDataStore_File_DataStore::Load)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1803920c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File_DataStore*>(),
                        {"Load", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_File_DataStore.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_File_DataStore::*)()>(&::Rewired::Data::UserDataStore_File_DataStore::Clear)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180391fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File_DataStore*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*& Rewired::Data::UserDataStore_File_DataStore::__cordl_internal_get__data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* const& Rewired::Data::UserDataStore_File_DataStore::__cordl_internal_get__data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr void Rewired::Data::UserDataStore_File_DataStore::__cordl_internal_set__data(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____data = value;
}
constexpr ::StringW& Rewired::Data::UserDataStore_File_DataStore::__cordl_internal_get__absFilePath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____absFilePath;
}
constexpr ::StringW const& Rewired::Data::UserDataStore_File_DataStore::__cordl_internal_get__absFilePath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____absFilePath;
}
constexpr void Rewired::Data::UserDataStore_File_DataStore::__cordl_internal_set__absFilePath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____absFilePath = value;
}
constexpr ::Rewired::Data::UserDataStore_File_IDataHandler*& Rewired::Data::UserDataStore_File_DataStore::__cordl_internal_get__dataHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataHandler;
}
constexpr ::Rewired::Data::UserDataStore_File_IDataHandler* const& Rewired::Data::UserDataStore_File_DataStore::__cordl_internal_get__dataHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataHandler;
}
constexpr void Rewired::Data::UserDataStore_File_DataStore::__cordl_internal_set__dataHandler(::Rewired::Data::UserDataStore_File_IDataHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dataHandler = value;
}
inline void Rewired::Data::UserDataStore_File_DataStore::_ctor(::StringW  fileName, ::StringW  absDirectory, ::Rewired::Data::UserDataStore_File_IDataHandler*  dataHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File_DataStore*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Rewired::Data::UserDataStore_File_IDataHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fileName, absDirectory, dataHandler);
}
inline bool Rewired::Data::UserDataStore_File_DataStore::TryGetValue(::StringW  key, ::by_ref<::System::Object*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File_DataStore*>(),
                        {"TryGetValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
inline bool Rewired::Data::UserDataStore_File_DataStore::SetValue(::StringW  key, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File_DataStore*>(),
                        {"SetValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
inline bool Rewired::Data::UserDataStore_File_DataStore::Save()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File_DataStore*>(),
                        {"Save", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::Data::UserDataStore_File_DataStore::Load()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File_DataStore*>(),
                        {"Load", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::Data::UserDataStore_File_DataStore::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File_DataStore*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Rewired::Data::UserDataStore_File_DataStore* Rewired::Data::UserDataStore_File_DataStore::New_ctor(::StringW  fileName, ::StringW  absDirectory, ::Rewired::Data::UserDataStore_File_IDataHandler*  dataHandler)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::UserDataStore_File_DataStore*>(fileName, absDirectory, dataHandler));
}
/// @brief Convert operator to "::Rewired::Data::UserDataStore_KeyValue_IDataStore"
constexpr  Rewired::Data::UserDataStore_File_DataStore::operator ::Rewired::Data::UserDataStore_KeyValue_IDataStore*() noexcept {
return static_cast<::Rewired::Data::UserDataStore_KeyValue_IDataStore*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Data::UserDataStore_KeyValue_IDataStore"
constexpr ::Rewired::Data::UserDataStore_KeyValue_IDataStore* Rewired::Data::UserDataStore_File_DataStore::i___Rewired__Data__UserDataStore_KeyValue_IDataStore() noexcept {
return static_cast<::Rewired::Data::UserDataStore_KeyValue_IDataStore*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Data::UserDataStore_File_DataStore::UserDataStore_File_DataStore()   {
}
//  Writing Method size for method: ::Rewired::Data::UserDataStore_File_LocalFileDataHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_File_LocalFileDataHandler::*)(::System::Func_1<::Rewired::Data::UserDataStore_File_DataFormat>*, ::Rewired::Data::UserDataStore_File_Codec*)>(&::Rewired::Data::UserDataStore_File_LocalFileDataHandler::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180394de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File_LocalFileDataHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_1<::Rewired::Data::UserDataStore_File_DataFormat>*>(), ::i2c::type_of<::Rewired::Data::UserDataStore_File_Codec*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_File_LocalFileDataHandler.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_File_LocalFileDataHandler::*)(::StringW, ::by_ref<::StringW>)>(&::Rewired::Data::UserDataStore_File_LocalFileDataHandler::Load)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180394ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File_LocalFileDataHandler*>(),
                        {"Load", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_File_LocalFileDataHandler.Save
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_File_LocalFileDataHandler::*)(::StringW, ::StringW)>(&::Rewired::Data::UserDataStore_File_LocalFileDataHandler::Save)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180394cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File_LocalFileDataHandler*>(),
                        {"Save", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_File_LocalFileDataHandler.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_File_LocalFileDataHandler::*)(::StringW)>(&::Rewired::Data::UserDataStore_File_LocalFileDataHandler::Clear)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180394b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File_LocalFileDataHandler*>(),
                        {"Clear", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Func_1<::Rewired::Data::UserDataStore_File_DataFormat>*& Rewired::Data::UserDataStore_File_LocalFileDataHandler::__cordl_internal_get__dataFormatDelegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataFormatDelegate;
}
constexpr ::System::Func_1<::Rewired::Data::UserDataStore_File_DataFormat>* const& Rewired::Data::UserDataStore_File_LocalFileDataHandler::__cordl_internal_get__dataFormatDelegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataFormatDelegate;
}
constexpr void Rewired::Data::UserDataStore_File_LocalFileDataHandler::__cordl_internal_set__dataFormatDelegate(::System::Func_1<::Rewired::Data::UserDataStore_File_DataFormat>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dataFormatDelegate = value;
}
constexpr ::Rewired::Data::UserDataStore_File_Codec*& Rewired::Data::UserDataStore_File_LocalFileDataHandler::__cordl_internal_get__codec()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____codec;
}
constexpr ::Rewired::Data::UserDataStore_File_Codec* const& Rewired::Data::UserDataStore_File_LocalFileDataHandler::__cordl_internal_get__codec() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____codec;
}
constexpr void Rewired::Data::UserDataStore_File_LocalFileDataHandler::__cordl_internal_set__codec(::Rewired::Data::UserDataStore_File_Codec*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____codec = value;
}
inline void Rewired::Data::UserDataStore_File_LocalFileDataHandler::_ctor(::System::Func_1<::Rewired::Data::UserDataStore_File_DataFormat>*  dataFormatDelegate, ::Rewired::Data::UserDataStore_File_Codec*  codec)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File_LocalFileDataHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_1<::Rewired::Data::UserDataStore_File_DataFormat>*>(), ::i2c::type_of<::Rewired::Data::UserDataStore_File_Codec*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataFormatDelegate, codec);
}
inline bool Rewired::Data::UserDataStore_File_LocalFileDataHandler::Load(::StringW  absoluteFilePath, ::by_ref<::StringW>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File_LocalFileDataHandler*>(),
                        {"Load", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, absoluteFilePath, data);
}
inline bool Rewired::Data::UserDataStore_File_LocalFileDataHandler::Save(::StringW  absoluteFilePath, ::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File_LocalFileDataHandler*>(),
                        {"Save", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, absoluteFilePath, data);
}
inline bool Rewired::Data::UserDataStore_File_LocalFileDataHandler::Clear(::StringW  absoluteFilePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File_LocalFileDataHandler*>(),
                        {"Clear", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, absoluteFilePath);
}
inline ::Rewired::Data::UserDataStore_File_LocalFileDataHandler* Rewired::Data::UserDataStore_File_LocalFileDataHandler::New_ctor(::System::Func_1<::Rewired::Data::UserDataStore_File_DataFormat>*  dataFormatDelegate, ::Rewired::Data::UserDataStore_File_Codec*  codec)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::UserDataStore_File_LocalFileDataHandler*>(dataFormatDelegate, codec));
}
/// @brief Convert operator to "::Rewired::Data::UserDataStore_File_IDataHandler"
constexpr  Rewired::Data::UserDataStore_File_LocalFileDataHandler::operator ::Rewired::Data::UserDataStore_File_IDataHandler*() noexcept {
return static_cast<::Rewired::Data::UserDataStore_File_IDataHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Data::UserDataStore_File_IDataHandler"
constexpr ::Rewired::Data::UserDataStore_File_IDataHandler* Rewired::Data::UserDataStore_File_LocalFileDataHandler::i___Rewired__Data__UserDataStore_File_IDataHandler() noexcept {
return static_cast<::Rewired::Data::UserDataStore_File_IDataHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Data::UserDataStore_File_LocalFileDataHandler::UserDataStore_File_LocalFileDataHandler()   {
}
//  Writing Method size for method: ::Rewired::Data::UserDataStore_File_Codec.Encode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Rewired::Data::UserDataStore_File_Codec::*)(::StringW)>(&::Rewired::Data::UserDataStore_File_Codec::Encode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_File_Codec*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_File_Codec*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_File_Codec.Decode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::UserDataStore_File_Codec::*)(::ArrayW<uint8_t>)>(&::Rewired::Data::UserDataStore_File_Codec::Decode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_File_Codec*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_File_Codec*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_File_Codec._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_File_Codec::*)()>(&::Rewired::Data::UserDataStore_File_Codec::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File_Codec*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t> Rewired::Data::UserDataStore_File_Codec::Encode(::StringW  string)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_File_Codec*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, string);
}
inline ::StringW Rewired::Data::UserDataStore_File_Codec::Decode(::ArrayW<uint8_t>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_File_Codec*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, data);
}
inline void Rewired::Data::UserDataStore_File_Codec::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File_Codec*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Data::UserDataStore_File_Codec* Rewired::Data::UserDataStore_File_Codec::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::UserDataStore_File_Codec*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::UserDataStore_File_Codec::UserDataStore_File_Codec()   {
}
//  Writing Method size for method: ::Rewired::Data::UserDataStore_File_UTF8Text.Encode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Rewired::Data::UserDataStore_File_UTF8Text::*)(::StringW)>(&::Rewired::Data::UserDataStore_File_UTF8Text::Encode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18039f8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_File_UTF8Text*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_File_UTF8Text*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_File_UTF8Text.Decode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::UserDataStore_File_UTF8Text::*)(::ArrayW<uint8_t>)>(&::Rewired::Data::UserDataStore_File_UTF8Text::Decode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18039f8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_File_UTF8Text*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_File_UTF8Text*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_File_UTF8Text._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_File_UTF8Text::*)()>(&::Rewired::Data::UserDataStore_File_UTF8Text::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File_UTF8Text*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t> Rewired::Data::UserDataStore_File_UTF8Text::Encode(::StringW  string)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_File_UTF8Text*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, string);
}
inline ::StringW Rewired::Data::UserDataStore_File_UTF8Text::Decode(::ArrayW<uint8_t>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_File_UTF8Text*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, data);
}
inline void Rewired::Data::UserDataStore_File_UTF8Text::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File_UTF8Text*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Data::UserDataStore_File_UTF8Text* Rewired::Data::UserDataStore_File_UTF8Text::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::UserDataStore_File_UTF8Text*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::UserDataStore_File_UTF8Text::UserDataStore_File_UTF8Text()   {
}
//  Writing Method size for method: ::Rewired::Data::UserDataStore_File_CLZF2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_File_CLZF2::*)()>(&::Rewired::Data::UserDataStore_File_CLZF2::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180391f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File_CLZF2*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_File_CLZF2.Encode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Rewired::Data::UserDataStore_File_CLZF2::*)(::StringW)>(&::Rewired::Data::UserDataStore_File_CLZF2::Encode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180391f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_File_CLZF2*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_File_CLZF2*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_File_CLZF2.Decode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::UserDataStore_File_CLZF2::*)(::ArrayW<uint8_t>)>(&::Rewired::Data::UserDataStore_File_CLZF2::Decode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180391eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_File_CLZF2*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_File_CLZF2*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr ::Rewired::Utils::Libraries::CLZF2::CLZF2*& Rewired::Data::UserDataStore_File_CLZF2::__cordl_internal_get__cLZF2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cLZF2;
}
constexpr ::Rewired::Utils::Libraries::CLZF2::CLZF2* const& Rewired::Data::UserDataStore_File_CLZF2::__cordl_internal_get__cLZF2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cLZF2;
}
constexpr void Rewired::Data::UserDataStore_File_CLZF2::__cordl_internal_set__cLZF2(::Rewired::Utils::Libraries::CLZF2::CLZF2*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cLZF2 = value;
}
inline void Rewired::Data::UserDataStore_File_CLZF2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File_CLZF2*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Rewired::Data::UserDataStore_File_CLZF2::Encode(::StringW  string)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_File_CLZF2*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, string);
}
inline ::StringW Rewired::Data::UserDataStore_File_CLZF2::Decode(::ArrayW<uint8_t>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_File_CLZF2*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, data);
}
inline ::Rewired::Data::UserDataStore_File_CLZF2* Rewired::Data::UserDataStore_File_CLZF2::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::UserDataStore_File_CLZF2*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::UserDataStore_File_CLZF2::UserDataStore_File_CLZF2()   {
}
//  Writing Method size for method: ::Rewired::Data::UserDataStore_File_IDataHandler.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_File_IDataHandler::*)(::StringW, ::by_ref<::StringW>)>(&::Rewired::Data::UserDataStore_File_IDataHandler::Load)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_File_IDataHandler*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_File_IDataHandler*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_File_IDataHandler.Save
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_File_IDataHandler::*)(::StringW, ::StringW)>(&::Rewired::Data::UserDataStore_File_IDataHandler::Save)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_File_IDataHandler*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_File_IDataHandler*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_File_IDataHandler.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::UserDataStore_File_IDataHandler::*)(::StringW)>(&::Rewired::Data::UserDataStore_File_IDataHandler::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_File_IDataHandler*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_File_IDataHandler*>(), 2}
                ));
    return ___internal_method;
  }
};
inline bool Rewired::Data::UserDataStore_File_IDataHandler::Load(::StringW  absoluteFilePath, ::by_ref<::StringW>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_File_IDataHandler*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, absoluteFilePath, data);
}
inline bool Rewired::Data::UserDataStore_File_IDataHandler::Save(::StringW  absoluteFilePath, ::StringW  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_File_IDataHandler*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, absoluteFilePath, data);
}
inline bool Rewired::Data::UserDataStore_File_IDataHandler::Clear(::StringW  absoluteFilePath)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_File_IDataHandler*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, absoluteFilePath);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Data::UserDataStore_File_DataFormat::UserDataStore_File_DataFormat(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Data::UserDataStore_File_DataFormat::UserDataStore_File_DataFormat()   {
}
constexpr ::Rewired::Data::UserDataStore_File_DataFormat  Rewired::Data::UserDataStore_File_DataFormat::Text{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Data::UserDataStore_File_DataFormat  Rewired::Data::UserDataStore_File_DataFormat::Binary{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_File.get_directory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::UserDataStore_File::*)()>(&::Rewired::Data::UserDataStore_File::get_directory)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18039fe50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File*>(),
                        {"get_directory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_File.set_directory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_File::*)(::StringW)>(&::Rewired::Data::UserDataStore_File::set_directory)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18039ff00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File*>(),
                        {"set_directory", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_File.get_fileName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::UserDataStore_File::*)()>(&::Rewired::Data::UserDataStore_File::get_fileName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e75e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File*>(),
                        {"get_fileName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_File.set_fileName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_File::*)(::StringW)>(&::Rewired::Data::UserDataStore_File::set_fileName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18039ff40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File*>(),
                        {"set_fileName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_File.get_dataFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::UserDataStore_File_DataFormat (::Rewired::Data::UserDataStore_File::*)()>(&::Rewired::Data::UserDataStore_File::get_dataFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18039fc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File*>(),
                        {"get_dataFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_File.set_dataFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_File::*)(::Rewired::Data::UserDataStore_File_DataFormat)>(&::Rewired::Data::UserDataStore_File::set_dataFormat)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18039fea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File*>(),
                        {"set_dataFormat", {}, {::i2c::type_of<::Rewired::Data::UserDataStore_File_DataFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_File.get_dataHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::UserDataStore_File_IDataHandler* (::Rewired::Data::UserDataStore_File::*)()>(&::Rewired::Data::UserDataStore_File::get_dataHandler)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18039fd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File*>(),
                        {"get_dataHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_File.set_dataHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_File::*)(::Rewired::Data::UserDataStore_File_IDataHandler*)>(&::Rewired::Data::UserDataStore_File::set_dataHandler)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18039fec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File*>(),
                        {"set_dataHandler", {}, {::i2c::type_of<::Rewired::Data::UserDataStore_File_IDataHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_File.get_dataStore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::UserDataStore_KeyValue_IDataStore* (::Rewired::Data::UserDataStore_File::*)()>(&::Rewired::Data::UserDataStore_File::get_dataStore)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18039fe40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_File*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_File*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_File.SetInitialValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_File::*)()>(&::Rewired::Data::UserDataStore_File::SetInitialValues)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_File*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_File*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_File.OnInitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_File::*)()>(&::Rewired::Data::UserDataStore_File::OnInitialize)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18039fbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::UserDataStore_File*>(),
                    {::i2c::class_of<::Rewired::Data::UserDataStore_File*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_File.OnDataSourceChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_File::*)()>(&::Rewired::Data::UserDataStore_File::OnDataSourceChanged)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18039f9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File*>(),
                        {"OnDataSourceChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_File._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::UserDataStore_File::*)()>(&::Rewired::Data::UserDataStore_File::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18039fce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::UserDataStore_File._get_dataHandler_b__17_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::UserDataStore_File_DataFormat (::Rewired::Data::UserDataStore_File::*)()>(&::Rewired::Data::UserDataStore_File::_get_dataHandler_b__17_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18039fc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File*>(),
                        {"<get_dataHandler>b__17_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Rewired::Data::UserDataStore_File::__cordl_internal_get__fileName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fileName;
}
constexpr ::StringW const& Rewired::Data::UserDataStore_File::__cordl_internal_get__fileName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fileName;
}
constexpr void Rewired::Data::UserDataStore_File::__cordl_internal_set__fileName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fileName = value;
}
constexpr ::Rewired::Data::UserDataStore_File_DataFormat& Rewired::Data::UserDataStore_File::__cordl_internal_get__dataFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataFormat;
}
constexpr ::Rewired::Data::UserDataStore_File_DataFormat const& Rewired::Data::UserDataStore_File::__cordl_internal_get__dataFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataFormat;
}
constexpr void Rewired::Data::UserDataStore_File::__cordl_internal_set__dataFormat(::Rewired::Data::UserDataStore_File_DataFormat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dataFormat = value;
}
constexpr ::StringW& Rewired::Data::UserDataStore_File::__cordl_internal_get___directory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____directory;
}
constexpr ::StringW const& Rewired::Data::UserDataStore_File::__cordl_internal_get___directory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____directory;
}
constexpr void Rewired::Data::UserDataStore_File::__cordl_internal_set___directory(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____directory = value;
}
constexpr ::Rewired::Data::UserDataStore_File_DataStore*& Rewired::Data::UserDataStore_File::__cordl_internal_get__dataStore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataStore;
}
constexpr ::Rewired::Data::UserDataStore_File_DataStore* const& Rewired::Data::UserDataStore_File::__cordl_internal_get__dataStore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataStore;
}
constexpr void Rewired::Data::UserDataStore_File::__cordl_internal_set__dataStore(::Rewired::Data::UserDataStore_File_DataStore*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dataStore = value;
}
constexpr ::Rewired::Data::UserDataStore_File_IDataHandler*& Rewired::Data::UserDataStore_File::__cordl_internal_get___dataHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____dataHandler;
}
constexpr ::Rewired::Data::UserDataStore_File_IDataHandler* const& Rewired::Data::UserDataStore_File::__cordl_internal_get___dataHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____dataHandler;
}
constexpr void Rewired::Data::UserDataStore_File::__cordl_internal_set___dataHandler(::Rewired::Data::UserDataStore_File_IDataHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____dataHandler = value;
}
constexpr bool& Rewired::Data::UserDataStore_File::__cordl_internal_get__initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr bool const& Rewired::Data::UserDataStore_File::__cordl_internal_get__initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr void Rewired::Data::UserDataStore_File::__cordl_internal_set__initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialized = value;
}
inline void Rewired::Data::UserDataStore_File::setStaticF_thisScriptName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "thisScriptName", ::Rewired::Data::UserDataStore_File*>(std::forward<::StringW>(value));
}
inline ::StringW Rewired::Data::UserDataStore_File::getStaticF_thisScriptName()  {
return ::cordl_internals::getStaticField<::StringW, "thisScriptName", ::Rewired::Data::UserDataStore_File*>();
}
inline ::StringW Rewired::Data::UserDataStore_File::get_directory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File*>(),
                        {"get_directory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_File::set_directory(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File*>(),
                        {"set_directory", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::Data::UserDataStore_File::get_fileName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File*>(),
                        {"get_fileName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_File::set_fileName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File*>(),
                        {"set_fileName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::Data::UserDataStore_File_DataFormat Rewired::Data::UserDataStore_File::get_dataFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File*>(),
                        {"get_dataFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::UserDataStore_File_DataFormat>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_File::set_dataFormat(::Rewired::Data::UserDataStore_File_DataFormat  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File*>(),
                        {"set_dataFormat", {}, {::i2c::type_of<::Rewired::Data::UserDataStore_File_DataFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::Data::UserDataStore_File_IDataHandler* Rewired::Data::UserDataStore_File::get_dataHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File*>(),
                        {"get_dataHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::UserDataStore_File_IDataHandler*>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_File::set_dataHandler(::Rewired::Data::UserDataStore_File_IDataHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File*>(),
                        {"set_dataHandler", {}, {::i2c::type_of<::Rewired::Data::UserDataStore_File_IDataHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::Data::UserDataStore_KeyValue_IDataStore* Rewired::Data::UserDataStore_File::get_dataStore()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_File*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::UserDataStore_KeyValue_IDataStore*>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_File::SetInitialValues()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_File*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_File::OnInitialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::UserDataStore_File*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_File::OnDataSourceChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File*>(),
                        {"OnDataSourceChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Data::UserDataStore_File::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Data::UserDataStore_File_DataFormat Rewired::Data::UserDataStore_File::_get_dataHandler_b__17_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::UserDataStore_File*>(),
                        {"<get_dataHandler>b__17_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::UserDataStore_File_DataFormat>(this, ___internal_method);
}
inline ::Rewired::Data::UserDataStore_File* Rewired::Data::UserDataStore_File::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::UserDataStore_File*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::UserDataStore_File::UserDataStore_File()   {
}
