/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/Grantee.h>
#include <aws/s3/model/Permission.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{

  /**
   * <p>Container for grant information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/Grant">AWS API
   * Reference</a></p>
   */
  class AWS_S3_API Grant
  {
  public:
    Grant();
    Grant(const Aws::Utils::Xml::XmlNode& xmlNode);
    Grant& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The person being granted permissions.</p>
     */
    inline const Grantee& GetGrantee() const{ return m_grantee; }

    /**
     * <p>The person being granted permissions.</p>
     */
    inline bool GranteeHasBeenSet() const { return m_granteeHasBeenSet; }

    /**
     * <p>The person being granted permissions.</p>
     */
    inline void SetGrantee(const Grantee& value) { m_granteeHasBeenSet = true; m_grantee = value; }

    /**
     * <p>The person being granted permissions.</p>
     */
    inline void SetGrantee(Grantee&& value) { m_granteeHasBeenSet = true; m_grantee = std::move(value); }

    /**
     * <p>The person being granted permissions.</p>
     */
    inline Grant& WithGrantee(const Grantee& value) { SetGrantee(value); return *this;}

    /**
     * <p>The person being granted permissions.</p>
     */
    inline Grant& WithGrantee(Grantee&& value) { SetGrantee(std::move(value)); return *this;}


    /**
     * <p>Specifies the permission given to the grantee.</p>
     */
    inline const Permission& GetPermission() const{ return m_permission; }

    /**
     * <p>Specifies the permission given to the grantee.</p>
     */
    inline bool PermissionHasBeenSet() const { return m_permissionHasBeenSet; }

    /**
     * <p>Specifies the permission given to the grantee.</p>
     */
    inline void SetPermission(const Permission& value) { m_permissionHasBeenSet = true; m_permission = value; }

    /**
     * <p>Specifies the permission given to the grantee.</p>
     */
    inline void SetPermission(Permission&& value) { m_permissionHasBeenSet = true; m_permission = std::move(value); }

    /**
     * <p>Specifies the permission given to the grantee.</p>
     */
    inline Grant& WithPermission(const Permission& value) { SetPermission(value); return *this;}

    /**
     * <p>Specifies the permission given to the grantee.</p>
     */
    inline Grant& WithPermission(Permission&& value) { SetPermission(std::move(value)); return *this;}

  private:

    Grantee m_grantee;
    bool m_granteeHasBeenSet;

    Permission m_permission;
    bool m_permissionHasBeenSet;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
