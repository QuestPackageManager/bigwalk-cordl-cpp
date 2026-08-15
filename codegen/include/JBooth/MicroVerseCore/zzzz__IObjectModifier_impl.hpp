#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/IObjectModifier.hpp"
#include "JBooth/MicroVerseCore/zzzz__IObjectModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__IModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__ISpawner_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__ObjectData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__ObjectJobHolder_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__OcclusionData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::IObjectModifier.ApplyObjectStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::IObjectModifier::*)(::JBooth::MicroVerseCore::ObjectData*, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*, ::JBooth::MicroVerseCore::OcclusionData*)>(&::JBooth::MicroVerseCore::IObjectModifier::ApplyObjectStamp)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::IObjectModifier*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::IObjectModifier*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::IObjectModifier.ProcessObjectStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::IObjectModifier::*)(::JBooth::MicroVerseCore::ObjectData*, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*, ::JBooth::MicroVerseCore::OcclusionData*)>(&::JBooth::MicroVerseCore::IObjectModifier::ProcessObjectStamp)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::IObjectModifier*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::IObjectModifier*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::IObjectModifier.ApplyObjectClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::IObjectModifier::*)(::JBooth::MicroVerseCore::ObjectData*)>(&::JBooth::MicroVerseCore::IObjectModifier::ApplyObjectClear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::IObjectModifier*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::IObjectModifier*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::IObjectModifier.NeedObjectClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::IObjectModifier::*)()>(&::JBooth::MicroVerseCore::IObjectModifier::NeedObjectClear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::IObjectModifier*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::IObjectModifier*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::IObjectModifier.NeedCurvatureMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::IObjectModifier::*)()>(&::JBooth::MicroVerseCore::IObjectModifier::NeedCurvatureMap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::IObjectModifier*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::IObjectModifier*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::IObjectModifier.OccludesOthers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::IObjectModifier::*)()>(&::JBooth::MicroVerseCore::IObjectModifier::OccludesOthers)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::IObjectModifier*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::IObjectModifier*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::IObjectModifier.NeedSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::IObjectModifier::*)()>(&::JBooth::MicroVerseCore::IObjectModifier::NeedSDF)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::IObjectModifier*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::IObjectModifier*>(), 6}
                ));
    return ___internal_method;
  }
};
inline void JBooth::MicroVerseCore::IObjectModifier::ApplyObjectStamp(::JBooth::MicroVerseCore::ObjectData*  td, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*  jobs, ::JBooth::MicroVerseCore::OcclusionData*  od)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::IObjectModifier*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, td, jobs, od);
}
inline void JBooth::MicroVerseCore::IObjectModifier::ProcessObjectStamp(::JBooth::MicroVerseCore::ObjectData*  td, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*  jobs, ::JBooth::MicroVerseCore::OcclusionData*  od)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::IObjectModifier*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, td, jobs, od);
}
inline void JBooth::MicroVerseCore::IObjectModifier::ApplyObjectClear(::JBooth::MicroVerseCore::ObjectData*  td)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::IObjectModifier*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, td);
}
inline bool JBooth::MicroVerseCore::IObjectModifier::NeedObjectClear()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::IObjectModifier*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::IObjectModifier::NeedCurvatureMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::IObjectModifier*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::IObjectModifier::OccludesOthers()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::IObjectModifier*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::IObjectModifier::NeedSDF()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::IObjectModifier*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::ISpawner"
constexpr  JBooth::MicroVerseCore::IObjectModifier::operator ::JBooth::MicroVerseCore::ISpawner*() noexcept {
return static_cast<::JBooth::MicroVerseCore::ISpawner*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::ISpawner"
constexpr ::JBooth::MicroVerseCore::ISpawner* JBooth::MicroVerseCore::IObjectModifier::i___JBooth__MicroVerseCore__ISpawner() noexcept {
return static_cast<::JBooth::MicroVerseCore::ISpawner*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::IModifier"
constexpr  JBooth::MicroVerseCore::IObjectModifier::operator ::JBooth::MicroVerseCore::IModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::IModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::IModifier"
constexpr ::JBooth::MicroVerseCore::IModifier* JBooth::MicroVerseCore::IObjectModifier::i___JBooth__MicroVerseCore__IModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::IModifier*>(static_cast<void*>(this));
}
