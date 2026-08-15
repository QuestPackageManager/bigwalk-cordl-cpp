#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/Deployment.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__SandboxId_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__Deployment_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Deployment.get_IsComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayEveryWare::EpicOnlineServices::Deployment::*)()>(&::PlayEveryWare::EpicOnlineServices::Deployment::get_IsComplete)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180537630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Deployment>(),
                        {"get_IsComplete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Deployment.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayEveryWare::EpicOnlineServices::Deployment::*)(::PlayEveryWare::EpicOnlineServices::Deployment)>(&::PlayEveryWare::EpicOnlineServices::Deployment::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180537480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Deployment>(),
                        {"Equals", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::Deployment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Deployment.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayEveryWare::EpicOnlineServices::Deployment::*)(::System::Object*)>(&::PlayEveryWare::EpicOnlineServices::Deployment::Equals)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805373e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Deployment>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Deployment>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Deployment.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::PlayEveryWare::EpicOnlineServices::Deployment::*)()>(&::PlayEveryWare::EpicOnlineServices::Deployment::GetHashCode)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180537510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Deployment>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Deployment>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Deployment.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::PlayEveryWare::EpicOnlineServices::Deployment::*)()>(&::PlayEveryWare::EpicOnlineServices::Deployment::ToString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805375b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Deployment>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Deployment>(), 3}
                ));
    return ___internal_method;
  }
};
inline bool PlayEveryWare::EpicOnlineServices::Deployment::get_IsComplete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Deployment>(),
                        {"get_IsComplete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool PlayEveryWare::EpicOnlineServices::Deployment::Equals(::PlayEveryWare::EpicOnlineServices::Deployment  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Deployment>(),
                        {"Equals", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::Deployment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool PlayEveryWare::EpicOnlineServices::Deployment::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Deployment>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t PlayEveryWare::EpicOnlineServices::Deployment::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Deployment>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW PlayEveryWare::EpicOnlineServices::Deployment::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Deployment>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::PlayEveryWare::EpicOnlineServices::Deployment>"
constexpr  PlayEveryWare::EpicOnlineServices::Deployment::operator ::System::IEquatable_1<::PlayEveryWare::EpicOnlineServices::Deployment>*()  {
return static_cast<::System::IEquatable_1<::PlayEveryWare::EpicOnlineServices::Deployment>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::PlayEveryWare::EpicOnlineServices::Deployment>"
constexpr ::System::IEquatable_1<::PlayEveryWare::EpicOnlineServices::Deployment>* PlayEveryWare::EpicOnlineServices::Deployment::i___System__IEquatable_1___PlayEveryWare__EpicOnlineServices__Deployment_()  {
return static_cast<::System::IEquatable_1<::PlayEveryWare::EpicOnlineServices::Deployment>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "SandboxId", ty: "::PlayEveryWare::EpicOnlineServices::SandboxId", modifiers: "", def_value: Some("{}") }, CppParam { name: "DeploymentId", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }]
constexpr ::PlayEveryWare::EpicOnlineServices::Deployment::Deployment(::PlayEveryWare::EpicOnlineServices::SandboxId  SandboxId, ::System::Guid  DeploymentId) noexcept  {
this->SandboxId = SandboxId;
this->DeploymentId = DeploymentId;
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::Deployment::Deployment()   {
}
