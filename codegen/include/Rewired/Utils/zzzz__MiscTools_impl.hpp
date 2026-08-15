#pragma once
// IWYU pragma private; include "Rewired/Utils/MiscTools.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Utils/zzzz__MiscTools_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__Bytes20_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::MiscTools.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Object*)>(&::Rewired::Utils::MiscTools::Clone)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18190a5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                        {"Clone", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::MiscTools.CreateGuidHashSHA256
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (*)(::StringW)>(&::Rewired::Utils::MiscTools::CreateGuidHashSHA256)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18190a770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                        {"CreateGuidHashSHA256", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::MiscTools.CreateGuidHashSHA1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (*)(::StringW)>(&::Rewired::Utils::MiscTools::CreateGuidHashSHA1)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18190a630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                        {"CreateGuidHashSHA1", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::MiscTools.HashSHA1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Bytes20 (*)(::StringW)>(&::Rewired::Utils::MiscTools::HashSHA1)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18190a900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                        {"HashSHA1", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::MiscTools.CreateHIDProductGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (*)(int32_t, int32_t)>(&::Rewired::Utils::MiscTools::CreateHIDProductGuid)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18190a870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                        {"CreateHIDProductGuid", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::MiscTools.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::Rewired::Utils::MiscTools::Tick)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18190acf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                        {"Tick", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::MiscTools.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Rewired::Utils::MiscTools::Tick)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18190ad10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                        {"Tick", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::MiscTools.TickPrev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::Rewired::Utils::MiscTools::TickPrev)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18190acd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                        {"TickPrev", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::MiscTools.TickPrev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Rewired::Utils::MiscTools::TickPrev)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18190aca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                        {"TickPrev", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::MiscTools.IsTickValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t)>(&::Rewired::Utils::MiscTools::IsTickValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18190ab50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                        {"IsTickValid", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::MiscTools.IsTickValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Rewired::Utils::MiscTools::IsTickValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18190ab70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                        {"IsTickValid", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::MiscTools.IsTickNewer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t, uint32_t)>(&::Rewired::Utils::MiscTools::IsTickNewer)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18190aad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                        {"IsTickNewer", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::MiscTools.IsTickNewer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t)>(&::Rewired::Utils::MiscTools::IsTickNewer)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18190ab10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                        {"IsTickNewer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::MiscTools.IsTickNewerOrEqualTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t, uint32_t)>(&::Rewired::Utils::MiscTools::IsTickNewerOrEqualTo)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18190aa90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                        {"IsTickNewerOrEqualTo", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::MiscTools.IsTickNewerOrEqualTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t)>(&::Rewired::Utils::MiscTools::IsTickNewerOrEqualTo)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18190aa50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                        {"IsTickNewerOrEqualTo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::MiscTools.TickDifference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(uint32_t, uint32_t)>(&::Rewired::Utils::MiscTools::TickDifference)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18190abc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                        {"TickDifference", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::MiscTools.TickDifference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::Rewired::Utils::MiscTools::TickDifference)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18190ac30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                        {"TickDifference", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::MiscTools.ToLongUnchecked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::Object*)>(&::Rewired::Utils::MiscTools::ToLongUnchecked)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x18190ad30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                        {"ToLongUnchecked", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::MiscTools.IsValidGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Rewired::Utils::MiscTools::IsValidGuid)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18190ab90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                        {"IsValidGuid", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::Utils::MiscTools::setStaticF_jhPiEMCJzmEAMJgJLFcHtFJAOttg(uint32_t  value)  {
::cordl_internals::setStaticField<uint32_t, "jhPiEMCJzmEAMJgJLFcHtFJAOttg", ::Rewired::Utils::MiscTools*>(std::forward<uint32_t>(value));
}
inline uint32_t Rewired::Utils::MiscTools::getStaticF_jhPiEMCJzmEAMJgJLFcHtFJAOttg()  {
return ::cordl_internals::getStaticField<uint32_t, "jhPiEMCJzmEAMJgJLFcHtFJAOttg", ::Rewired::Utils::MiscTools*>();
}
inline void Rewired::Utils::MiscTools::setStaticF_KCTBJVuKTseVjhdKVXbKivVweawY(uint32_t  value)  {
::cordl_internals::setStaticField<uint32_t, "KCTBJVuKTseVjhdKVXbKivVweawY", ::Rewired::Utils::MiscTools*>(std::forward<uint32_t>(value));
}
inline uint32_t Rewired::Utils::MiscTools::getStaticF_KCTBJVuKTseVjhdKVXbKivVweawY()  {
return ::cordl_internals::getStaticField<uint32_t, "KCTBJVuKTseVjhdKVXbKivVweawY", ::Rewired::Utils::MiscTools*>();
}
inline void Rewired::Utils::MiscTools::setStaticF_CqfpUuSHysIEkLtzomTCODwkhZjA(uint32_t  value)  {
::cordl_internals::setStaticField<uint32_t, "CqfpUuSHysIEkLtzomTCODwkhZjA", ::Rewired::Utils::MiscTools*>(std::forward<uint32_t>(value));
}
inline uint32_t Rewired::Utils::MiscTools::getStaticF_CqfpUuSHysIEkLtzomTCODwkhZjA()  {
return ::cordl_internals::getStaticField<uint32_t, "CqfpUuSHysIEkLtzomTCODwkhZjA", ::Rewired::Utils::MiscTools*>();
}
inline void Rewired::Utils::MiscTools::setStaticF_YnMuikzIPBURdhFysxCCqOUAaYrm(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "YnMuikzIPBURdhFysxCCqOUAaYrm", ::Rewired::Utils::MiscTools*>(std::forward<int32_t>(value));
}
inline int32_t Rewired::Utils::MiscTools::getStaticF_YnMuikzIPBURdhFysxCCqOUAaYrm()  {
return ::cordl_internals::getStaticField<int32_t, "YnMuikzIPBURdhFysxCCqOUAaYrm", ::Rewired::Utils::MiscTools*>();
}
inline void Rewired::Utils::MiscTools::setStaticF_yguUwvONUpJODBSDgANQBgBzuRUuA(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "yguUwvONUpJODBSDgANQBgBzuRUuA", ::Rewired::Utils::MiscTools*>(std::forward<int32_t>(value));
}
inline int32_t Rewired::Utils::MiscTools::getStaticF_yguUwvONUpJODBSDgANQBgBzuRUuA()  {
return ::cordl_internals::getStaticField<int32_t, "yguUwvONUpJODBSDgANQBgBzuRUuA", ::Rewired::Utils::MiscTools*>();
}
inline void Rewired::Utils::MiscTools::setStaticF_aBelfHrPoeEOWkkrekqyavGGaabQc(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "aBelfHrPoeEOWkkrekqyavGGaabQc", ::Rewired::Utils::MiscTools*>(std::forward<int32_t>(value));
}
inline int32_t Rewired::Utils::MiscTools::getStaticF_aBelfHrPoeEOWkkrekqyavGGaabQc()  {
return ::cordl_internals::getStaticField<int32_t, "aBelfHrPoeEOWkkrekqyavGGaabQc", ::Rewired::Utils::MiscTools*>();
}
inline ::System::Object* Rewired::Utils::MiscTools::Clone(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                        {"Clone", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, obj);
}
template<typename T>
inline T Rewired::Utils::MiscTools::Clone(T  obj)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                    {"Clone", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, obj);
}
template<typename T>
inline T Rewired::Utils::MiscTools::DeepClone(T  obj)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                    {"DeepClone", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, obj);
}
template<typename T>
inline T Rewired::Utils::MiscTools::DeepClone(T  obj, bool  createIfNull)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                    {"DeepClone", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, obj, createIfNull);
}
template<typename T>
inline ::ArrayW<T> Rewired::Utils::MiscTools::DeepClone(::ArrayW<T>  obj)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                    {"DeepClone", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, obj);
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* Rewired::Utils::MiscTools::DeepClone(::System::Collections::Generic::List_1<T>*  obj)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                    {"DeepClone", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, obj);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::Dictionary_2<TKey,TValue>* Rewired::Utils::MiscTools::DeepClone(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  dictionary)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                    {"DeepClone", {::i2c::class_of<TKey>(), ::i2c::class_of<TValue>()}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<TKey,TValue>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TKey>(), ::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<TKey,TValue>*>(nullptr, ___internal_method, dictionary);
}
inline ::System::Guid Rewired::Utils::MiscTools::CreateGuidHashSHA256(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                        {"CreateGuidHashSHA256", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(nullptr, ___internal_method, text);
}
inline ::System::Guid Rewired::Utils::MiscTools::CreateGuidHashSHA1(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                        {"CreateGuidHashSHA1", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(nullptr, ___internal_method, text);
}
inline ::Rewired::Utils::Classes::Data::Bytes20 Rewired::Utils::MiscTools::HashSHA1(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                        {"HashSHA1", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Bytes20>(nullptr, ___internal_method, text);
}
inline ::System::Guid Rewired::Utils::MiscTools::CreateHIDProductGuid(int32_t  vendorId, int32_t  productId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                        {"CreateHIDProductGuid", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(nullptr, ___internal_method, vendorId, productId);
}
inline uint32_t Rewired::Utils::MiscTools::Tick(uint32_t  counter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                        {"Tick", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, counter);
}
inline int32_t Rewired::Utils::MiscTools::Tick(int32_t  counter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                        {"Tick", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, counter);
}
inline uint32_t Rewired::Utils::MiscTools::TickPrev(uint32_t  counter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                        {"TickPrev", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, counter);
}
inline int32_t Rewired::Utils::MiscTools::TickPrev(int32_t  counter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                        {"TickPrev", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, counter);
}
inline bool Rewired::Utils::MiscTools::IsTickValid(uint32_t  tick)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                        {"IsTickValid", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tick);
}
inline bool Rewired::Utils::MiscTools::IsTickValid(int32_t  tick)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                        {"IsTickValid", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tick);
}
inline bool Rewired::Utils::MiscTools::IsTickNewer(uint32_t  tick1, uint32_t  tick2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                        {"IsTickNewer", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tick1, tick2);
}
inline bool Rewired::Utils::MiscTools::IsTickNewer(int32_t  tick1, int32_t  tick2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                        {"IsTickNewer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tick1, tick2);
}
inline bool Rewired::Utils::MiscTools::IsTickNewerOrEqualTo(uint32_t  tick1, uint32_t  tick2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                        {"IsTickNewerOrEqualTo", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tick1, tick2);
}
inline bool Rewired::Utils::MiscTools::IsTickNewerOrEqualTo(int32_t  tick1, int32_t  tick2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                        {"IsTickNewerOrEqualTo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tick1, tick2);
}
inline int64_t Rewired::Utils::MiscTools::TickDifference(uint32_t  tick1, uint32_t  tick2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                        {"TickDifference", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, tick1, tick2);
}
inline int32_t Rewired::Utils::MiscTools::TickDifference(int32_t  tick1, int32_t  tick2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                        {"TickDifference", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, tick1, tick2);
}
template<typename T>
inline void Rewired::Utils::MiscTools::Swap(::by_ref<T>  a, ::by_ref<T>  b)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                    {"Swap", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, b);
}
inline int64_t Rewired::Utils::MiscTools::ToLongUnchecked(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                        {"ToLongUnchecked", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline bool Rewired::Utils::MiscTools::IsValidGuid(::StringW  guid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::MiscTools*>(),
                        {"IsValidGuid", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, guid);
}
// Ctor Parameters []
constexpr ::Rewired::Utils::MiscTools::MiscTools()   {
}
