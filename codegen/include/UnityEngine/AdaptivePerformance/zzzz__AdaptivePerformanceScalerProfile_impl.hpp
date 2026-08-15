#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptivePerformanceScalerProfile.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceScalerSettings_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceScalerProfile_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceScaler_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile::get_Name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180322750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile.set_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile::*)(::StringW)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile::set_Name)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180322770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile.get_AddedScalers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>* (::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile::get_AddedScalers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ec4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*>(),
                        {"get_AddedScalers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile.EnableAddedScalers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile::EnableAddedScalers)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18221dd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*>(),
                        {"EnableAddedScalers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile.RemoveAllAddedScalersFromIndexer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile::RemoveAllAddedScalersFromIndexer)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18221ddc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*>(),
                        {"RemoveAllAddedScalersFromIndexer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18221de60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*& UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile::__cordl_internal_get_m_AddedScalers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AddedScalers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>* const& UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile::__cordl_internal_get_m_AddedScalers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AddedScalers;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile::__cordl_internal_set_m_AddedScalers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AddedScalers = value;
}
constexpr ::StringW& UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile::__cordl_internal_get_m_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Name;
}
constexpr ::StringW const& UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile::__cordl_internal_get_m_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Name;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile::__cordl_internal_set_m_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Name = value;
}
inline ::StringW UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile::set_Name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>* UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile::get_AddedScalers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*>(),
                        {"get_AddedScalers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile::EnableAddedScalers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*>(),
                        {"EnableAddedScalers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile::RemoveAllAddedScalersFromIndexer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*>(),
                        {"RemoveAllAddedScalersFromIndexer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile* UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile::AdaptivePerformanceScalerProfile()   {
}
